#include<iostream>
using namespace std;

int removeDuplicate(int arr[], int n){
  int res = 1;
  for(int i=0;i<n;i++){
    if(arr[res-1]!=arr[i]){
      arr[res] = arr[i];
      res++;
    }
  }
  return res;
}
int main(){
  int arr[] = {10,12,12,20,20,30};
  int n = removeDuplicate(arr,6);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}
