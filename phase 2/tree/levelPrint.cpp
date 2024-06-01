#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *left, *right;
};


void DFS(Node* root){
    if (root == NULL)
        return;

    queue<Node*> q;
    q.push(root);

    while (q.empty() == false) {
        int n= q.size();
        for(int i=0; i<n;i++){
            Node* node = q.front();
            cout << node->data << " ";
            q.pop();
            
            if (node->left != NULL)
                q.push(node->left);

            if (node->right != NULL)
                q.push(node->right);
        } cout<<"\n";    
    }
}


Node* newNode(int data)
{
    Node* temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

int main()
{
    Node* root = newNode(0); 
    root->left = newNode(1);
    root->right = newNode(2);
    root->left->left = newNode(3);
    root->left->right = newNode(4);
    root->right->left = newNode(5);
    root->right->right = newNode(6);
 
    DFS(root);
    return 0;
}