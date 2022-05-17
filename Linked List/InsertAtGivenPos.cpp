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

Node *insertAtPos(Node *head,int pos,int x){
  Node *temp = new Node(x);
  if(pos==1){
    temp->next = head;
    return temp;
  }
  Node *curr = head;
  for(int i=1;i<=pos-2 && curr!=NULL;i++){
    curr = curr->next;
  }
  if(curr==NULL){
    return head;
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
  head = insertAtPos(head,3,20);
  printList(head);
  return 0;
}
