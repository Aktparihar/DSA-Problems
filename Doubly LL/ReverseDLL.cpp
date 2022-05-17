#include<bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  Node *next;
  Node *prev;
  Node(int x){
    data = x;
    next = NULL;
    prev = NULL;
  }
};

void printList(Node *head){
  while(head!=NULL){
    cout<<head->data<<" ";
    head = head->prev;
  }
}

Node *reverse(Node *head){
  while(head->next!=NULL){
    head = head->next;
  }
  return head;
}

int main(){
  Node *head = new Node(10);
  Node *temp1 = new Node(20);
  Node *temp2 = new Node(30);
  head->next = temp1;
  temp1->prev = head;
  temp1->next = temp2;
  temp2->prev = temp1;
  head = reverse(head);
  printList(head);
  cout<<endl;
  cout<<head->data;
  return 0;
}
