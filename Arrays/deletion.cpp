#include<iostream>
using namespace std;

int deletion(int arr[], int n, int element){
  if(element == arr[n-1]){
    return n-1;
  }
  for(int i=0;i<n;i++){
    if(arr[i]==element){
      break;
    }
    for(int j=n-1;j>i;j--){
      arr[j] = arr[j+1];
    }
  }
  return n-1;
}
int main(){
  int arr[] = {3,9,4,12,15};
  int index = deletion(arr,5,15);
  cout << index;
}
