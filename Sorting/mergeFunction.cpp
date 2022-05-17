#include<bits/stdc++.h>
using namespace std;

void merge(int a[],int l,int h,int m){
  int i=0;int j=m+1;
  while(i<m && j<h){
    if(a[i]<a[j]){
      cout<<a[i++]<<" ";
    }
    else{
      cout<<a[j++]<<" ";
    }
  }
  while(i<m){
    cout<<a[i++]<<" ";
  }
  while(j<h){
    cout<<a[j++]<<" ";
  }
}

int main(){
  int arr[] = {10,15,20,40,8,11,15,22,25};
  merge(arr,0,8,3);
  return 0;
}
