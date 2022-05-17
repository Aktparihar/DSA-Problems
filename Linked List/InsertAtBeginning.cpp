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

Node *insertAtBeg(Node *head, int x){
  Node *temp = new Node(x);
  temp->next = head;
}

int main(){
  Node *head = new Node(10);
  head = insertAtBeg(head,20);
  head = insertAtBeg(head,30);
  printList(head);
  return 0;
}
