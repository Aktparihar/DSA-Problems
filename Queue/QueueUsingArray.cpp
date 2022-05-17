#include<bits/stdc++.h>
using namespace std;

struct Queue{
  int *arr;
  int size;
  int cap;
  int front,rear;
  Queue(int c){
    cap = c;
    size = 0;
    front = 0;
    rear = 0;
    arr = new int[cap];
  }
  void enqueue(int x){
    if(size == 0){
      arr[front] = x;
      size++;
      return;
    }
    if(cap!=size){
      rear++;
      size++;
      arr[rear] = x;
    }
  }
  void dequeue(){
    if(size>0){
      front++;
    }
  }
  int getFront(){
    return arr[front];
  }
  int getRear(){
    return arr[rear];
  }
  bool isFull(){
    if(size == cap){
      return true;
    }
    return false;
  }
  bool isEmpty(){
    if(size==0){
      return true;
    }
    else{
      return false;
    }
  }
  int sizeOfQueue(){
    return size;
  }
};

int main(){
  Queue s(5);
  s.enqueue(10);
  s.enqueue(20);
  s.enqueue(40);
  s.dequeue();
  s.dequeue();
  cout<<s.getFront()<<endl;
  cout<<s.getRear()<<endl;
  cout<<s.sizeOfQueue()<<endl;
  cout<<s.isFull()<<endl;
  cout<<s.isEmpty()<<endl;

}
