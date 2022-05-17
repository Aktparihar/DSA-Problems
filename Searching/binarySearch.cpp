#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int x,int n){
  int low = 0;
  int high = n-1;
  while(high>=low){
    int mid = (low+high)/2;
    if(arr[mid] == x){
      return mid+1;
    }
    else if(arr[mid]>x){
      high = mid-1;
    }
    else{
      low = mid+1;
    }
  }
  return -1;
}
int main(){
  int arr[] = {1,23,34,45,67,78,89};
  cout<<"Found at index: "<<binarySearch(arr,89,7);
  return 0;
}
