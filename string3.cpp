#include<iostream>
#include<string>
using namespace std;

string Cap(string a){
    for(int i = 0; i < a.size(); i++){
        if(i == 0){
            a[i] = toupper(a[i]);
        }
        else if(a[i] == ' '){
            a[i+1] = toupper(a[i+1]);
        }
    }
    return a;
}

int main(){
    string a;
    getline(cin,a);
    a = Cap(a);
    cout<<a;
}