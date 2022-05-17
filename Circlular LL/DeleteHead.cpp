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
  if(head==NULL)return;
  Node *curr=head;
  do{
    cout<<curr->data<<" ";
    curr=curr->next;
  }while(curr!=head);
}

// Naive Approach
Node *deleteHead1(Node *head){
  Node *curr = head;
  if(head==NULL)return NULL;
  if(head->next==NULL){
    delete head;
    return NULL;
  }
  while(curr->next!=head){
    curr = curr->next;
  }
  curr->next = head->next;
  delete head;
  return (curr->next);
}

Node *deleteHead2(Node *head){
  Node *curr = head;
  if(head==NULL)return NULL;
  if(head->next==NULL){
    delete head;
    return NULL;
  }
  curr = curr->next;
  head->next = curr->next;
  int t = curr->data;
  curr->data = head->data;
  head->data = t;
  delete curr;
  return head;
}

int main(){
  Node *head = new Node(10);
  head->next = new Node(20);
  head->next->next = new Node(30);
  head->next->next->next = new Node(40);
  head->next->next->next->next = head;
  printList(head);
  cout<<endl;
  head = deleteHead2(head);
  printList(head);
  return 0;
}
