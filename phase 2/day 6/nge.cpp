#include <bits/stdc++.h>
using namespace std;

#define forn(i,n) for(int i=0; i<n; i++)
typedef map<int, int> mii;

void monotonic(){
    stack<int> stack1;
    int n;
    cin >> n;
    vector<int> v(n);
    mii indices;
    vector<int> ans(n);
    forn(i, n) {
        cin >> v[i];
    }

    stack1.push(v[0]);
    for (int i = 1; i < n; i++) {
        indices[v[i]]=i;
 
        while (stack1.empty() && stack1.top() < v[i]) {
            ans[indices[stack1.top()]]= v[i];
            stack1.pop();
        }
        stack1.push(v[i]);

        while (!stack1.empty()) {
        ans[indices[stack1.top()]]= -1;
        stack1.pop();
        }
    }
    forn(i, n) {
        cout<< ans[i];
    }

    // for (int i = 0; i < n; ++i) {  
    //     while (!stack1.empty() && stack1.top() < v[i]) {
    //         stack1.pop();
    //         ans[i]= v[i];
    //     }
    //     ans[i]= -1;
    //     stack1.push(v[i]);
    // }
    // while (!stack1.empty()) {
    //     cout << stack1.top() << " ";
    //     stack1.pop();
    // }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    monotonic();
}