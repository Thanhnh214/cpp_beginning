#include<iostream>
using namespace std;

int main(){
    int n;
    int a[n];
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    int max = a[0];
    for(int i = 1; i < n; i++){
        if(max <= a[i]){
            max = a[i];
        }
    }
    cout<<max;
}