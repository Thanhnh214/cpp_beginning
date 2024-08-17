#include<iostream>
#include<string>

using namespace std;

int main(){
    string a;
    cin>>a;
    string c = a;
    int b = a.size();
    for(int i = 0; i < b; i++){
        c[i] = a[b-i-1];
    }
    cout<<c;
}