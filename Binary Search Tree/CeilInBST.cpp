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

// bool search(Node *root, int k){
//   while(root!=NULL){
//     if(root->key == k){
//       return true;
//     }
//     if(root->key > k){
//       root = root->left;
//     }else(root->key < k){
//       root = root->right;
//     }
//   }
//   return false;
// }

Node *floorOfBST(Node *root, int k){
  Node *res = NULL;
  while(root!=NULL){
    if(root->key == k){
      return root;
    }else if(root->key > k){
      res = root;
      root = root->left;
    }else{
      root = root->right;
    }
  }
  return res;
}

int main(){
  Node *root = new Node(50);
  root->left = new Node(30);
  root->right = new Node(70);
  root->right->right = new Node(80);
  root->right->left = new Node(60);
  root->right->left->right = new Node(65);
  root->right->left->left = new Node(55);
  root->left->right = new Node(40);
  root->left->left= new Node(20);
  root = floorOfBST(root,63);
  if(root == NULL){
    cout<<"NULL";
  }
  cout<<root->key;
  return 0;
}
