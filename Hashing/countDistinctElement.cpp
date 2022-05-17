#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
  int arr[] = {10,10,10};
  unordered_set<int> m;
  int arrSize = sizeof(arr)/sizeof(arr[0]);
  while(arrSize>0){
    m.insert(arr[arrSize]);
    arrSize--;
  }
  cout<<m.size()<<" "<<endl;
  return 0;
}
