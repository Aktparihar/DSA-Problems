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

// void preorderIterative(Node *root){
//   stack<Node *> s;
//   Node *curr = root;
//   while(curr != NULL || s.empty()==false){
//     while(curr != NULL){
//       cout<<curr->key<<" ";
//       s.push(curr);
//       curr = curr->left;
//     }
//     curr = s.top();
//     s.pop();
//     curr = curr->right;
//   }
// }

void preorderIterative(Node *root){
  if(root == NULL)return;
  stack<Node *> s;
  s.push(root);
  while(s.empty()==false){
    Node *curr = s.top();
    cout<<(curr->key)<<" ";
    s.pop();
    if(curr->right!=NULL){
      s.push(curr->right);
    }
    if(curr->left!=NULL){
      s.push(curr->left);
    }
  }
}

int main(){
  Node *root = new Node(10);
  root->left = new Node(20);
  root->right = new Node(30);
  root->left->left = new Node(40);
  root->left->right = new Node(50);
  root->right->left = new Node(60);
  root->left->right->left = new Node(80);
  preorderIterative(root);
  return 0;
}
