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

Node *deleteHead2(Node *head){
  Node *curr = head;
  if(head==NULL)return NULL;
  if(head->next==NULL){
    delete head;
    return NULL;
  }
  curr = curr->next;
  head->next = curr->next;
  int t = curr->data;
  curr->data = head->data;
  head->data = t;
  delete curr;
  return head;
}

Node *deleteKthNode(Node *head, int k){
  if(head==NULL)return NULL;
  if(k==1){
    return deleteHead2(head);
  }
  Node *curr = head;
  for(int i=0;i<k-2;i++){
    curr = curr->next;
  }
  Node *temp = curr->next;
  curr->next = curr->next->next;
  delete(temp);
  return head;
}

int main(){
  Node *head = new Node(10);
  head->next = new Node(20);
  head->next->next = new Node(30);
  head->next->next->next = new Node(40);
  head->next->next->next->next = head;
  printList(head);
  cout<<endl;
  head = deleteKthNode(head,1);
  printList(head);
  return 0;
}
