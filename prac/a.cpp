#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
   ll count = 0;
   ll N,M;
   cin>>N>>M;
   vector<ll> arr(N+1);
   for(ll i=2;i<=N;i++){
     ll a=M%i;
     count = count+arr[a]+1;
     for(ll j=a;j<=N;j+=i){
       arr[j]++;
     }
   }
   cout<<count<<endl;


   // vector<ll> arr;
   // for(int i=1;i<=N;i++){
   //   arr[i] = i;
   // }

  //  ll x,y;
  //  for(ll i=1;i<=N;i++){
  //    x = M % i;
  //    x = x % (i+1);
  //    y = M % (i+1);
  //    //cout<<y<<endl;
  //    y = y % i;
  //    //cout<<"i: "<<i<<" i+1: "<<i+1<<endl;
  //    cout<<x<<" "<<y<<endl;
  //    if(x == y){
  //      count++;
  //    }
  //  }
  // cout<<count<<endl;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("outtt.txt", "w", stdout);
    #endif
    ll t;
    cin>>t;
    while(t--){
      solve();
    }
    return 0;
}
