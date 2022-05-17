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
  while(head!=NULL){
    cout<<(head->data)<<" ";
    head = head->next;
  }
}

Node *insert(Node *head,int x){
  Node *temp = new Node(x);
  if(head == NULL){
    return temp;
  }
  if(head->data > x){
    temp->next = head;
    return temp;
  }
  Node *curr = head;
  while(curr->next->data < x && curr->next!=NULL){
    curr = curr->next;
  }
  temp->next = curr->next;
  curr->next = temp;
  return head;
}


int main(){
  Node *head = new Node(10);
  head->next = new Node(30);
  head->next->next = new Node(40);
  head->next->next->next = new Node(50);
  printList(head);
  cout<<endl;
  head = insert(head,49);
  printList(head);
  return 0;
}
