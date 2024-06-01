#include<iostream>
#include<stack>
#include<vector>
using namespace std;

#define forn(i,n) for(int i=0; i<n; i++)

void stacks(){
    stack<int> stack1;
    int n;
    cin >> n;
    vector<int> v(n);
    forn(i, n) {
        cin >> v[i];
    }

    stack1.push(v[0]);

    for (int i = 0; i < n; ++i) {  
        while (!stack1.empty() && stack1.top() > v[i]) {
            stack1.pop();
        }
        stack1.push(v[i]);
    }
    
    while (!stack1.empty()) {
        cout << stack1.top() << " ";
        stack1.pop();
    }
    cout << "\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    stacks();
}