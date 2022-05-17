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
  cout<<head->data<<" ";
  Node *curr = head->next;
  // for(Node *curr=head->next;curr!=head;curr=curr->next){
  //   cout<<(curr->data)<<" ";
  // }
  do{
    cout<<(curr->data)<<" ";
    curr=curr->next;
  }while(curr!=head);
}

int main(){
  Node *head = new Node(10);
  head->next = new Node(20);
  head->next->next = new Node(30);
  head->next->next->next = new Node(40);
  head->next->next->next->next = head;
  printList(head);
  return 0;
}
