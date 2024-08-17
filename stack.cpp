#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main(){
    stack<char> stack;
    string a;
    cin>>a;
    stack.push(a[a.size()-1]);
    for(int i = a.size()-2; i >= 0; i--){
        if(stack.top() == a[i]){
            stack.pop();
        }
        else if(stack.top() != a[i] || stack.empty()){
            stack.push(a[i]);
        }
    }
    while(!stack.empty()){
        cout<<stack.top();
        stack.pop();
    }
    if(stack.empty() == true){
        cout<<"Empty String";
    }
}