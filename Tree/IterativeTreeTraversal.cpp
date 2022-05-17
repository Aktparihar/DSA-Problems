#include<bits/stdc++.h>
using namespace std;

struct Node{
  int key;
  Node *left;
  Node *right;
  Node(int k){
    key = k;
    left = NULL;
    right = NULL;
  }
};

void inorderIterative(Node *root){
  stack<Node *> s;
  Node *curr = root;
  while(curr != NULL || s.empty()==false){
    while(curr != NULL){
      s.push(curr);
      curr = curr->left;
    }
    curr = s.top();
    s.pop();
    cout<<curr->key<<" ";
    curr = curr->right;
  }
}

int main(){
  Node *root = new Node(10);
  root->left = new Node(300);
  root->right = new Node(20);
  root->left->left = new Node(80);
  root->left->right = new Node(90);
  inorderIterative(root);
  return 0;
}
