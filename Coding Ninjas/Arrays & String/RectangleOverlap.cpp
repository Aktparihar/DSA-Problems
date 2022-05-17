#include<bits/stdc++.h>
#include<climits>
using namespace std;


void solve(){
  int x0,y0,x1,y1;
  int a0,b0,a1,b1;
  cin>>x0>>y0>>x1>>y1;
  cin>>a0>>b0>>a1>>b1;
  if(x1<=a0 || y0 >=b1 || x0>=a1 || b0>=y1){
    cout<<0;
  }else{
    cout<<1;
  }
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("outt.txt", "w", stdout);
    #endif
    solve();
    return 0;
}
