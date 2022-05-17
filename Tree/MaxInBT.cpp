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

void maxInBT(Node *root){
  if(root==NULL){return;}
  int max = INT_MIN;
  queue<Node *> q;
  q.push(root);
  while(q.empty()==false){
    Node *curr = q.front();
    q.pop();
    if(curr->key>max){
      max = curr->key;
    }
    if(curr->left!=NULL){
      q.push(curr->left);
    }
    if(curr->right!=NULL){
      q.push(curr->right);
    }
  }
  cout<<"Maximum is: "<<max;
}

int main(){
  Node *root = new Node(10);
  root->left = new Node(300);
  root->right = new Node(20);
  root->left->left = new Node(80);
    root->left->right = new Node(90);
  maxInBT(root);
  return 0;
}
