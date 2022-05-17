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

int SizeOfBT(Node *root){
  if(root==NULL){
    return 0;
  }
  else{
    return 1+SizeOfBT(root->left)+SizeOfBT(root->right);
  }
}

int main(){
  Node *root = new Node(10);
  root->left = new Node(20);
  root->right = new Node(30);
  root->left->left = new Node(40);
  root->left->right = new Node(50);
  root->right->right = new Node(70);
  cout<<SizeOfBT(root);
  return 0;
}
