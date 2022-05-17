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
Node *insertAtEnd(Node *head, int x){
  Node *curr = head->next;
  Node *temp = new Node(x);
  if(head==NULL){
    temp = temp->next;
    return temp;
  }
  while(curr->next!=head){
    curr = curr->next;
  }
  curr->next=temp;
  temp->next=head;
  return head;
}

// Efficient Method
Node *insertAtEnd2(Node *head,int x){
  Node *temp = new Node(x);
  if(head==NULL){
    temp = temp->next;
  }
  else{
    temp->next = head->next;
    head->next = temp;
    int t = head->data;
    head->data = temp->data;
    temp->data = t;
  }
  return temp;
}

int main(){
  Node *head = new Node(10);
  head->next = new Node(20);
  head->next->next = new Node(30);
  head->next->next->next = new Node(40);
  head->next->next->next->next = head;
  printList(head);
  cout<<endl;
  head = insertAtEnd2(head,6);
  printList(head);
  return 0;
}
