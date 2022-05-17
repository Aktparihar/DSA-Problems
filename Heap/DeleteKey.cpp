#include<bits/stdc++.h>
using namespace std;

class MinHeap{
  int *arr;
  int size;
  int cap;
public: MinHeap(int c){
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

  void minHeapify(int i){
    int lt = left(i);
    int rt = right(i);
    int smallest = i;
    if(lt<size && arr[lt]<arr[i]){
      smallest = lt;
    }
    if(rt<size && arr[rt]<arr[i]){
      smallest = rt;
    }
    if(smallest!=i){
      swap(arr[i],arr[smallest]);
      minHeapify(smallest);
    }
  }

  int extractMin(){
    if(size == 0){
      return INT_MAX;
    }
    if(size == 1){
      return arr[0];
    }
    swap(arr[0],arr[size-1]);
    minHeapify(0);
    return arr[size];
  }

  void deleteKey(int i)
  {
    decreseKey(i, INT_MIN);
    extractMin();
  }

};
int main(){
  MinHeap d(10);
  d.insert(10);
  d.insert(20);
  d.insert(30);
  d.insert(40);
  d.insert(50);
  d.insert(35);
  d.insert(38);
  d.insert(45);
  d.display();
  cout<<endl;
  d.deleteKey(3);
  d.display();
  return 0;
}
