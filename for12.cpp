#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int x;
    cin>>x;
    int sum = 0;
    for(int i = 1; i <= x; i++){
        sum += pow(i,2);
    }
    cout<<sum;
}