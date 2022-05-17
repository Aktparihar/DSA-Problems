#include<bits/stdc++.h>
using namespace std;

int search(int arr[],int low,int high,int x){
  int mid = (low+high)/2;
  if(low>high){
    return -1;
  }
  if(arr[mid]>x){
    return search(arr,low,mid-1,x);
  }
  else if(arr[mid]<x){
    return search(arr,mid+1,high,x);
  }
  else{
    if(mid==0||arr[mid-1]!=arr[mid]){
      return mid;
    }
    else{
      return search(arr,low,mid-1,x);
    }
  }
}
int main(){
  int arr[] = {1,5,5,5};
  cout<<"First occurence is: "<<search(arr,0,2,5);
  return 0;
}
