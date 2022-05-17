#include<bits/stdc++.h>
using namespace std;

void SelectionSort(int arr[], int n){
  for(int i =0;i<n-1;i++){
    int min_ind = i;
    for(int j=i+1;j<n;j++){
      if(arr[j]<arr[min_ind]){
        min_ind = j;
      }
     }
     swap(arr[min_ind],arr[i]);
  }
}

int main(){
  int arr[] = {23,34,12,45,1,2};
  SelectionSort(arr,6);
  for(int x:arr){
    cout<<x<<" ";
  }
  return 0;
}
