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
int main(){
  // Node *head = new Node(19);
  // Node *temp1 = new Node(20);
  // Node *temp2 = new Node(24);
  // head->next = temp1;
  // temp1->next = temp2;

  Node *head = new Node(20);
  head->next = new Node(34);
  head->next->next = new Node(45);
  return 0;
}
