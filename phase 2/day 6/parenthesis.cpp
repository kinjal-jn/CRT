#include <iostream>
#include <stack>
#include <string>
using namespace std;

#define forn(i,n) for(int i=0; i<n; i++)

void stacks() {
    stack<char> stack1;
    string given;
    cin >> given;

    bool isBalanced = true;

    for (char ch : given) {
        if (ch == '{' || ch == '[' || ch == '(') {
            stack1.push(ch);
        } else if (ch == '}' || ch == ']' || ch == ')') {
            if (stack1.empty()) {
                isBalanced = false;
                break;
            }
            char top = stack1.top();
            stack1.pop();
            if ((ch == '}' && top != '{') ||
                (ch == ']' && top != '[') ||
                (ch == ')' && top != '(')) {
                isBalanced = false;
                break;
            }
        }
    }

    if (!stack1.empty()) {
        isBalanced = false;
    }

    cout << (isBalanced ? "YES" : "NO") << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    stacks();

    return 0;
}
