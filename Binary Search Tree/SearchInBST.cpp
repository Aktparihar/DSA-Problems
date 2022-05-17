#include<bits/stdc++.h>
using namespace std;

struct Node{
  int key;
  Node *left;
  Node *right;
  Node(int k){
    key = k;
    left = right = NULL;
  }
};

bool search(Node *root, int k){
  // if(root==NULL){
  //   return false;
  // }
  // if(root->key==k){
  //   return true;
  // }
  // if(k > root->key){
  //   search(root->right, k);
  // }
  // else{
  //   search(root->left, k);
  // }

  while(root!=NULL){
    if(root->key == k){
      return true;
    }
    if(k > root->key){
      root = root->right;
    }
    else{
      root = root->left;
    }
  }
  return false;
}

int main(){
  Node *root = new Node(10);
  root->left = new Node(7);
  root->right = new Node(15);
  root->left->right = new Node(8);
  root->right->left = new Node(13);
  cout<<search(root, 6);
  return 0;
}
