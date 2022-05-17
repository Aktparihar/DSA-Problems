#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
  int n = 6;
  vector<int> arr = {10,1,23,2,34,2};
  sort(arr.begin(),arr.end());
  for(int x:arr){
    cout<<x<<" ";
  }
  // sort(arr,arr+n,greater<int>);
  // cout<<endl;
  // for(int x:arr){
  //   cout<<x<<" ";
  // }
return 0;
}
