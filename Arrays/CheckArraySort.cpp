#include<iostream>
using namespace std;

bool checkSorted(int arr[], int n){
  for(int i=0;i<n;i++){
    if(arr[i]>arr[i+1]){
      return false;
    }
  }
  return true;
}
int main(){
  int arr[] = {3,2};
  bool flag = checkSorted(arr,2);
  if(flag){
    cout<<"YES";
  }
  else{
    cout<<"NO";
  }
  return 0;
}
