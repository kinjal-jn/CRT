#include<iostream>
#include<stack>
using namespace std;

#define forn(i,n) for(int i=0; i<n; i++)

void stacks(){
    stack<int> stack1;
    int n;
    cin>>n;
    forn(i,n){
        stack1.push(i);
    }
    while(!stack1.empty()){
        cout<<stack1.top()<<" ";
        stack1.pop();
    }
    cout<<"\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    stacks();
}