#include <bits/stdc++.h>
using namespace std;

class MinHeap{
    int arr[]= {10,5,20,2,4,8};
    int size;
    int capacity;

    public:
    MinHeap(int c){
    size = 5;
    capacity = c;
    }
    int left(int i) { return (2*i + 1); }
    int right(int i) { return (2*i + 2); }
    int parent(int i) { return (i-1)/2; }

    void minHeapify(int i)
    {
    int lt = left(i);
    int rt = right(i);
    int smallest = i;
    if (lt < size && arr[lt] < arr[i])
        smallest = lt;
    if (rt < size && arr[rt] < arr[smallest])
        smallest = rt;
    if (smallest != i)
    {
        swap(arr[i],arr[smallest]);
        minHeapify(smallest);
    }
  }
    void display(){
      for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
      }
    }
};

int main()
{
    MinHeap h(11);
    h.display();
    return 0;
}
