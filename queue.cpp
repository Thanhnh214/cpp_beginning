#include<iostream>
#include<queue>
#include<stack>

using namespace std;

int main(){
    queue<int> queue;
    stack<int> stack;
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
        queue.push(a[i]);
    }
    while(!queue.empty()){
        stack.push(queue.front());
        queue.pop();
    }
    while(!stack.empty()){
        queue.push(stack.top());
        stack.pop();
    }
    while(!queue.empty()){
        cout<<queue.front();
        queue.pop();
    }
}