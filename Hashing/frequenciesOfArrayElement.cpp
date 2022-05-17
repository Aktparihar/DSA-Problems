#include<iostream>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;

int Frequencies(int arr[], int n){
  unordered_map<int,int> h;
  for(int x:arr){
    h[x]++;
  }
  for(auto e:h){
    cout<<e.first<<" "<<e.second<<endl;
  }
  return 0;
}

int main(){
  int arr[] = {10,12,10,15,10,20,12,12};
  Frequencies(arr,8);
  return 0;
}
