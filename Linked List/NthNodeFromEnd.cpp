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

void endNode(Node *head, int x){
  Node *curr = head;
  int count = 0;
  while(curr!=NULL){
    curr = curr->next;
    count++;
  }
  if(count<x){
    return;
  }
  for(int i=1;i<count-x+1;i++){
    head = head->next;
  }
  cout<<head->data<<endl;
}

void endNodeSecond(Node *head, int x){
  Node *first = head;
  Node *second = head;
  while(x>0){
    if(first==NULL)return;
    first = first->next;
    x--;
  }
  while(first!=NULL){
    first = first->next;
    second = second->next;
  }
  cout<<second->data<<endl;
}

int main(){
  Node *head = new Node(10);
  head->next = new Node(20);
  head->next->next = new Node(30);
  head->next->next->next = new Node(40);
  head->next->next->next->next = new Node(50);
  endNode(head,2);
  endNodeSecond(head,2);
  printList(head);
  return 0;
}
