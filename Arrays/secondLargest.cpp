#include<iostream>
using namespace std;

int largest(int arr[],int n){
  int res = 0;
  for(int i=1;i<n;i++){
    if(arr[i]>arr[res]){
      res = i;
    }
  }
  return res;
}
int secondLargest(int arr[],int n,int res){
  int secondLargestIndex = -1;
  for(int i=0;i<n;i++){
    if(arr[res]!=arr[i]){
      if(arr[i]>arr[secondLargestIndex]){
        secondLargestIndex = i;
      }
      else if(secondLargestIndex == -1){
        secondLargestIndex = i;
      }
    }
  }
  return secondLargestIndex;
}
int main(){
  int arr[] = {10,5,8,20};
  int larIndex = largest(arr,4);
  int secIndex = secondLargest(arr,4,larIndex);
  cout<<secIndex;
}
