#include<bits/stdc++.h>
#include<climits>
using namespace std;


void solve(){
  int n;
  cin>>n;
  long long sum=0;
  sum = (n/4)*44;
  int r = (n%4);
  int res;
  if(n<4){
    if(n==1){
    res = 20;
    }else if(n==2){
      res = 36;
    }else if(n==3){
      res = 51;
    }else if(n==4){
      res = 60;
    }
    cout<<res<<endl;
  }else{   
    if(r == 0){
      sum+=16;
    }else if(r==1){
      sum+=32;
    }else if(r==2){
      sum+=44;
    }else if(r==3){
      sum+=55;
    }
    cout<<sum<<endl;
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
    }
    return 0;
}
