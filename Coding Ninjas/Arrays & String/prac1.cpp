#include<bits/stdc++.h>
using namespace std;
#define lt long long

long long solve(long long x, long long y){
  long long start = 1;
  x = x % 1000000007;
  if(x==0)return 0;
  while(y>0){
    if(y & 1){
      start = (start*x) % 1000000007;
    }
    y = y>>1;
    x = (x*x) % 1000000007;
  }
  return start;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("outt.txt", "w", stdout);
    #endif
    int t;
    cin>>t;
    while(t--){
      long long z;
      cin>>z;
      long long result = solve(2,z-1);
      cout<<result<<endl;
    }
    return 0;
}
