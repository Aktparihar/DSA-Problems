#include<iostream>
using namespace std;

int search(int arr[],int n,int element){
  for(int i=0;i<n;i++){
    if(arr[i]==element){
      return i+1;
    }
  }
  return -1;
}

int main(){
  int arr[] = {1,2,3,4,5,6};
  int index = search(arr,6,1);
  cout<<index;
  return 0;
}
