#include<iostream>
using namespace std;

void rotate(int arr[], int n){
  int temp = arr[0];
  for(int i=0;i<n;i++){
    arr[i] = arr[i+1];
  }
  arr[n-1] = temp;
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}
int main(){
  int arr[] = {1,2,3,4,5,6};
  rotate(arr,6);
  return 0;
}
