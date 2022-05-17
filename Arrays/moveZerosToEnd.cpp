#include<iostream>
using namespace std;

void moveZeros(int arr[],int n){
  int count = 0;
  for(int i=0;i<n;i++){
    if(arr[i] != 0){
      swap(arr[count],arr[i]);
      count++;
    }
  }
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}
int main(){
  int arr[] = {1,2,0,3,0,0,6};
  moveZeros(arr,7);
  return 0;
}
