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
  Node *curr=head->next;
  do{
    cout<<curr->data<<" ";
    curr=curr->next;
  }while(curr!=head);
}

Node *insertAtBeg(Node *head, int x){
  Node *temp = new Node(x);
  if(head==NULL){
    temp->next = temp;
  }
  else{
    Node *curr = head;
    while(curr->next!=head){
      curr=curr->next;
    }
    curr->next = temp;
    temp->next = head;
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
  head = insertAtBeg(head,6);
  printList(head);
  return 0;
}
