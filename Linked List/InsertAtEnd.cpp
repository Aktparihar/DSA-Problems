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

Node *insertAtEnd(Node *head,int x){
  Node *temp = new Node(x);
  if(head==NULL)
    return temp;
  Node *curr = head;
  while(curr->next!=NULL){
    curr = curr->next;
  }
  curr->next = temp;
  return head;   
}

int main(){
  Node *head = NULL;
  head = insertAtEnd(head,20);
  head = insertAtEnd(head,30);
  head = insertAtEnd(head,40);
  printList(head);
  return 0;
}
