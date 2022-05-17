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

void printList(Node *head){
  Node *curr = head;
  while(curr!=NULL){
    cout<<(curr->data)<<" ";
    curr = curr->next;
  }
}

void fun1(Node *head){
  if(head==NULL){
    return;
  }
  fun1(head->next);
  cout<<head->data<<" ";
}

int main(){
  Node *head = new Node(20);
  head->next = new Node(34);
  head->next->next = new Node(45);
  head->next->next->next = new Node(40);
  fun1(head);
  return 0;
}
