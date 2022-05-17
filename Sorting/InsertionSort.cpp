#include<bits/stdc++.h>
using namespace std;

void InsertionSort(int arr[], int n){
  for(int i=1;i<n;i++){
    int key = arr[i];
    int j = i-1;
    while(j>=0 && arr[j]>key){
      arr[j+1] = arr[j];
      j--;
    }
    arr[j+1] = key;
  }
  for(int x=0;x<n;x++){
    cout<<arr[x]<<" ";
  }
}

int main(){
  int arr[] = {23,34,12,45,1,2};
  InsertionSort(arr,6);
  return 0;
}
