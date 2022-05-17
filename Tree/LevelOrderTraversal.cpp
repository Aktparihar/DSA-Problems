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

void LevelOrder(Node *root, int k){
  if(root==NULL){
    return;
  }
  if(k==0){
    cout<<(root->key)<<" ";
  }
  else{
    LevelOrder(root->left, k-1);
    LevelOrder(root->right, k-1);
  }
}

int height(Node *root){
  if(root==NULL){
    return 0;
  }
  else{
    return max(height(root->left),height(root->right))+1;
  }
}

int main(){
  Node *root = new Node(10);
  root->left = new Node(20);
  root->right = new Node(30);
  root->left->left = new Node(40);
  root->left->right = new Node(50);
  root->right->right = new Node(70);
  int h = height(root);
  for(int i=0 ; i < h ; i++){
    LevelOrder(root,i);
  }
  return 0;
}
