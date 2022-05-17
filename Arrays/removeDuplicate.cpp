#include<iostream>
using namespace std;

int removeDuplicate(int arr[], int n){
  int temp[n];
  temp[0] = arr[0];
  int sizeOfNewArray = 1;

  for(int i=1;i<n;i++){
    if(temp[sizeOfNewArray-1]!=arr[i]){
      temp[sizeOfNewArray] = arr[i];
      sizeOfNewArray++;
    }
  }
  for(int i=0;i<sizeOfNewArray;i++){
    arr[i] = temp[i];
  }
  return sizeOfNewArray;
}
int main(){
  int arr[] = {10,12,10,10,20,30};
  int n = removeDuplicate(arr,6);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}
