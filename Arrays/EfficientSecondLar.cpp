#include<iostream>
using namespace std;

int secondLargest(int arr[], int n){
  int res=-1;
  int largest = 0;
  for(int i=1;i<n;i++){
    if(arr[i]>arr[largest]){
      res = largest;
      largest = i;
    }
    else if(arr[i]!=arr[largest]){
      if(arr[i]>arr[res]||res==-1){
        res = i;
      }
    }
  }
  return res;
}
int main(){
  int arr[] = {30,5,8,20};
  int secondLargestIndex = secondLargest(arr,4);
  cout<<secondLargestIndex;
}
