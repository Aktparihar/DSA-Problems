#include<iostream>
using namespace std;

void reverseArray(int arr[], int n){
  int low = 0;int high = n-1;
  while(high>low){
    swap(arr[high],arr[low]);
    high--;
    low++;
  }
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}
int main(){
  int arr[] = {1,2,3,4};
  reverseArray(arr,4);
  return 0;
}
