#include<bits/stdc++.h>
using namespace std;

int main(){
  // Max_HEAP = priority_queue<int> pq;
  // Min_HEAP = priority_queue<int, vector<int>,greater<int>> pq;
  int arr[] = {10,5,15};
  priority_queue<int> pq(arr,arr+3);
  // pq.push(10);
  // pq.push(15);
  // pq.push(5);
  cout<<pq.size()<<endl;
  cout<<pq.top()<<endl;
  while(pq.empty()==false){
    cout<<pq.top()<<" ";
    pq.pop();
  }
  return 0;
}
