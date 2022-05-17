#include<bits/stdc++.h>
#include<climits>
using namespace std;

void solve(){
  int number;
  cin>>number;
  int ans=0;
  while(number>0){
    number/=5;
    ans = ans+number;
  }
  cout<<ans<<endl;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("outt.txt", "w", stdout);
    #endif
    solve();
    return 0;
}
