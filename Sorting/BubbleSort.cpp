#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[],int n){
  for(int i=0;i<n-1;i++){
    bool swapped = false;
    for(int j=0;j<n-1-i;j++){
      if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
        swapped = true;
      }
    }
    if(swapped == false){
      break;
    }
  }

}

int main(){
  int arr[] = {1,2,3,4,5,6};
  bubbleSort(arr,6);
  for(int x:arr){
    cout<<x<<" ";
  }
  return 0;
}
