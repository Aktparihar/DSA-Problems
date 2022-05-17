#include<bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  Node *next;
  Node(int x){
    data = x;
    next = NULL;
  }
};

int searchIterative(Node *head, int x){
  int pos = 1;
  while(head!=NULL){
    if(head->data == x){
      return pos;
    }
    else{
      pos++;
      head = head->next;
    }
  }
  return -1;
}

int searchRecursive(Node *head,int x){
  if(head==NULL){
    return -1;
  }
  if(head->data==x){
    return 1;
  }
  else{
    int res = searchRecursive(head->next,x);
    if(res==-1)return -1;
    else return (res+1);

  }
}


int main(){
  Node *head = new Node(10);
  head->next = new Node(20);
  head->next->next = new Node(30);
  head->next->next->next = new Node(40);
  cout<<searchIterative(head,30)<<endl;
  cout<<searchRecursive(head,10);
  return 0;
}
