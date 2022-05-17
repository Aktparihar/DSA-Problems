#include<bits/stdc++.h>
using namespace std;

class MinHeap{
  int *arr;
  int size;
  int cap;
  public: MinHeap(int c){
    arr = new int[c];
    size = 0;
    cap = c;
  }
  int left(int i){
    return (2*i+1);
  }
  int right(int i){
    return (2*i+2);
  }
  int parent(int i){
    return ((i-1)/2);
  }
  void insert(int x){
    if(size == cap)return;
    size++;
    arr[size-1] = x;
    for(int i=size-1; i!=0 && arr[parent(i)]>arr[i];){
      swap(arr[i],arr[parent(i)]);
      i = parent(i);
    }
  }
  void display(){
    for(int i=0;i<size;i++){
      cout<<arr[i]<<" ";
    }
  }
};

int main(){
  MinHeap m(10);
  m.insert(80);
  m.insert(10);
  m.insert(15);
  m.insert(18);
  m.insert(55);
  m.insert(100);
  m.display();
}
