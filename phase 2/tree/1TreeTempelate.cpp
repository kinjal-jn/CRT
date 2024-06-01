#include <bits/stdc++.h>
using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)

class Node{
    public:
    int data;
    Node *left;
    Node *right;
};

Node* NewNode(int data){
    Node *node = new Node();
    node->data= data;
    node->left= NULL;
    node->right= NULL;
}

Node* dummyTree(){
    Node *root = NewNode(0);
    root->left = NewNode(1);
    root->right = NewNode(2);
    root->left->left = NewNode(3);
    root->left->right = NewNode(4);
    root->right->left = NewNode(5);
    root->right->right = NewNode(6);
    return root;
}

void inOrder(Node *currentNode){
    if(currentNode==NULL){
        return;
    }
    inOrder(currentNode->left);
    cout<<currentNode->data<<" ";
    inOrder(currentNode->right);
}

void preOrder(Node *currentNode){
    if(currentNode==NULL){
        return;
    }
    cout<<currentNode->data<<" ";
    preOrder(currentNode->left);
    preOrder(currentNode->right);
}

void postOrder(Node *currentNode){
    if(currentNode==NULL){
        return;
    }
    postOrder(currentNode->left);
    postOrder(currentNode->right);
    cout<<currentNode->data<<" ";
}

void solve()
{
    Node *root= dummyTree();
    inOrder(root);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    // auto start = high_resolution_clock::now();
    // auto stop = high_resolution_clock::now();
    // auto duration = duration_cast<nanoseconds>(stop - start);
    // cout << duration.count() << "\n";
}