#include<bits/stdc++.h>
using namespace std;

int count(int arr[], int n,int low,int high){
  while(low<=high){
    int mid = (low+high)/2;
    if(arr[mid]==0){
      low = mid+1;
    }
    else{
      if(mid==0|| arr[mid-1]!=arr[mid]){
        return n-mid;
      }
      else{
        high = mid-1;
      }
    }
  }
  return 0;
}
int main(){
  int arr[] = {0,0,0,0,1,1,1};
  cout<<count(arr,7,0,6);
  return 0;
}
