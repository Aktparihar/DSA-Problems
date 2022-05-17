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

Node *getSuccessor(Node *curr){
  curr = curr->right;
  while(curr!=NULL && curr->left != NULL){
    curr = curr->left;
  }
  return curr;
}

Node *deleteBST(Node *root, int k){
  if(root==NULL)return root;
  if(root->key > k){
    root->left = deleteBST(root->left, k);
  }else if(root->key < k){
    root->right = deleteBST(root->right, k);
  }else {
    if(root->left == NULL){
      Node *temp = root->right;
      delete(root);
      return temp;
    }
    else if(root->right == NULL){
      Node *temp = root->left;
      delete(root);
      return temp;
    }else {
      Node *succ= getSuccessor(root);
      root->key = succ->key;
      root->right = deleteBST(root->right,succ->key);
    }
    return root;
  }
}



int main(){
  Node *root = new Node(10);
  root->left = new Node(5);
  root->right = new Node(15);
  root->right->right = new Node(18);
  root->right->left = new Node(12);
  cout<<search(root, 18)<<endl;
  if(search(root, 18)==true){
    deleteBST(root, 18);
    cout<<search(root, 18);
  }
  return 0;
}
