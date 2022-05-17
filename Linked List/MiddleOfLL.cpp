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

void middleLL(Node *head){
  if(head==NULL)return;
  int pos=0;
  while(curr!=NULL){
    curr = curr->next;
    pos++;
  }
    pos = pos/2;
    Node *curr = head;
    while(pos>0){
      head = head->next;
      pos--;
    }
  cout<<head->data;
}

int main(){
  Node *head = new Node(10);
  head->next = new Node(30);
  head->next->next = new Node(40);
  head->next->next->next = new Node(50);
  head->next->next->next->next = new Node(80);
  head->next->next->next->next->next=new Node(90);
  printList(head);
  cout<<endl;
  middleLL(head);
  return 0;
}
