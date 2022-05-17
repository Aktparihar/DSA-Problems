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

Node *insert1(Node *root, int k){
  Node *curr = root;
  while(root!=NULL){
    if(root->key < k){
      root = root->right;
    }
    else{
      root = root->left;
    }
  }
  if(root==NULL){
    return new Node(k);
  }
  return curr;
}

Node *insert(Node *root, int k){
  Node *temp = new Node(k);
  Node *parent = NULL,*curr = root;
  while(curr!=NULL){
    parent = root;
    if(curr->key > k){
      curr = curr->left;
    }else if(curr->key < k){
      curr = curr->right;
    }else{
      return root;
    }
  }
  if(parent == NULL)return temp;
  if(parent->key > k){
    parent->left = temp;
  }else{
    parent->right = temp;
  }
  return root;
}

int main(){
  Node *root = new Node(10);
  root->left = new Node(5);
  root->right = new Node(15);
  root->right->right = new Node(18);
  root->right->left = new Node(12);
  cout<<search(root, 20)<<endl;
  if(search(root, 20)==false){
    insert(root, 20);
    cout<<search(root, 20);
  }
  return 0;
}
