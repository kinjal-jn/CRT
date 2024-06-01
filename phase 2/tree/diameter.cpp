#include <bits/stdc++.h>
using namespace std;
// using namespace std::chrono;

typedef vector<int> vi;
typedef vector<string> vs;
typedef map<int, int> mii;

#define pb push_back
#define mp make_pair
#define forn(i, n) for (int i = 0; i < n; i++)


class node {
public:
    int data;
    node* left;
    node* right;
};


node* newNode(int data)
{
    node* Node = new node();
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;
 
    return (Node);
} 

int maxDepth(node* Current_node)
{
    if (Current_node == NULL)
        return 0;
    else {
        return 1+ max(maxDepth(Current_node->left),maxDepth(Current_node->right));
    }
}

int main()
{
    node* root = newNode(0);
 
    root->left = newNode(1);
    root->right = newNode(2);
    root->left->left = newNode(3);
    root->left->right = newNode(4);
    root->right->left = newNode(5);
    root->right->right = newNode(6);
 
    cout<<maxDepth(root->left)+maxDepth(root->right)+1;
    return 0;
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);

    // solve();
    // auto start = high_resolution_clock::now();
    // auto stop = high_resolution_clock::now();
    // auto duration = duration_cast<nanoseconds>(stop - start);
    // cout << duration.count() << "\n";
}