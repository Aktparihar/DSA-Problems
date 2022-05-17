#include<iostream>
using namespace std;

int insert(int arr[],int n,int capacity,int position,int elementToInsert){
  if(capacity == n){
    return n;
  }
  int idx = position-1;
  for(int i=n-1;i>=idx;i--){
    arr[i+1] = arr[i];
  }
  arr[idx] = elementToInsert;
  return n+1;
}
int main(){
  int arr[5] = {6,5,8};
  int totalElement = insert(arr,3,5,2,13);
  cout<<totalElement<<endl;
  for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
  }
}
