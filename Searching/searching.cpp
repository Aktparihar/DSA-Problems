#include<bits/stdc++.h>
using namespace std;

int search(int arr[],int n,int x){
  for(int i=0;i<n;i++){
    if(arr[i] == x){
      return i;
      break;
    }
  }
  return -1;
}
int main(){
  int arr[] = {20,10,10,10,50,60};
  cout<<search(arr,6,10);
  return 0;
}
