#include<bits/stdc++.h>
using namespace std;

class DecreaseKey{
  int *arr;
  int size;
  int cap;
public: DecreaseKey(int c){
  size = 0;
  cap = c;
  arr = new int[c];
}
  int left(int i) { return (2*i + 1); }
  int right(int i) { return (2*i + 2); }
  int parent(int i) { return (i-1)/2; }

  void insert(int x)
    {
    if (size == cap)return;
    size++;
    arr[size-1]=x;
    for (int i=size-1;i!=0 && arr[parent(i)]>arr[i];)
    {
       swap(arr[i], arr[parent(i)]);
       i = parent(i);
    }
  }

  void display(){
    for(int i=0;i<size;i++){
      cout<<arr[i]<<" ";
    }
  }

  void decreseKey(int i, int x){
    arr[i] = x;
    while(i!=0 && arr[parent(i)>arr[i]]){
      swap(arr[i],arr[parent(i)]);
      i = parent(i);
    }
  }
};
int main(){
  DecreaseKey d(10);
  d.insert(10);
  d.insert(20);
  d.insert(40);
  d.insert(80);
  d.insert(100);
  d.insert(70);
  d.display();
  cout<<endl;
  d.decreseKey(3,5);
  d.display();
  return 0;
}
