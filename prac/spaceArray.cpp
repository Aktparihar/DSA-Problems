#include<bits/stdc++.h>
#include <string>
using namespace std;

void solve(){
  int test;
  cin>>test;
  int arr[test];
  int element;
  for(int i=0;i<test;i++){
    cin>>element;
    arr[i] = element;
  }
  sort(arr,arr+test);
  int diff=0;
  int sum = 0;
  for(int i=0;i<test;i++){
    if(arr[i]>i+1){
      cout<<"Second";
      return;
    }else{

      diff = arr[i]-(i+1);
      sum = sum+diff;
    }
    //cout<<arr[i];
  }
  if(sum%2==0){
    cout<<"Second";
  }else{
    cout<<"First";
  }
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("outt.txt", "w", stdout);
    #endif
    int t;
    cin>>t;
    while(t--){
      solve();
      cout<<"\n";
    }
    return 0;
}
