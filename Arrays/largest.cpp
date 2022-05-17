#include<iostream>
using namespace std;

int greatest(int arr[], int n){
  int largest = arr[0];
  for (int i=0;i<n;i++){
    if(arr[i]>largest){
      largest = arr[i];
    }
  }
  return largest;
}
int main(){
  int arr[] = {1256,34,67,34,133};
  int largest = greatest(arr,5);
  cout << largest;
  return 0;
}
