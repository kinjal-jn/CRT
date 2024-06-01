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

// int maxDepth(node* Current_node)
// {
//     if (Current_node == NULL)
//         return 0;
//     else {
//         return 1+ max(maxDepth(Current_node->left),maxDepth(Current_node->right));
//     }
// }

void printPreorder(node* node)
{
    if (node == NULL)
        return;

    cout << node->data << " ";
    printPreorder(node->left);
    printPreorder(node->right);
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
    printPreorder(root);
    //cout << "Height of tree is " << maxDepth(root);
    return 0;
   
}