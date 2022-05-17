#include<bits/stdc++.h>
using namespace std;

int recursiveBSearch(int arr[], int low, int high, int x){
  if(low>high)
    return -1;
  int mid = (high+low)/2;
  if(arr[mid] == x){
    return mid+1;
  }
  else if(arr[mid]>x){
    return recursiveBSearch(arr,low,mid-1,x);
  }
  else{
    return recursiveBSearch(arr,mid+1,high,x);
  }
}
int main(){
  int arr[] = {1,23,34,45,67,78,89};
  cout<<"Found at index: "<<recursiveBSearch(arr,0,6,43);
  return 0;
}
