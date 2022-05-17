#include<bits/stdc++.h>
using namespace std;

struct MyStack{
  int *arr;
  int top;
  int cap;
  MyStack(int c){
    cap = c;
    top = -1;
    arr = new int[cap];
  }
  void push(int x){
    top++;
    arr[top] = x;
  }
  int pop(){
    int res = arr[top];
    top--;
    return res;
  }
  int peek(){
    return arr[top];
  }
  bool isEmpty(){
    return (top == -1);
  }
  int size(){
    return (top+1);
  }
};

int main(){
  MyStack s(10);
  s.push(5);
  s.push(6);
  s.push(7);
  cout<<s.size()<<endl;
  cout<<s.peek()<<endl;
  cout<<s.pop()<<endl;
  s.push(8);
  cout<<s.peek()<<endl;
  cout<<s.isEmpty()<<endl;
  return 0;
}
