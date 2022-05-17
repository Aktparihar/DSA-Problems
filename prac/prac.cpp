#include<bits/stdc++.h>
#define ll long long
using namespace std;


void solve(){
  ll number;
  cin>>number;
  ll x=0;
  ll y=0;
  ll d=0;
  const ll bitcount = log2(number)+1;
  d = pow(2,bitcount);
  bitset<100> bset(number);

  ll A[bitcount];
  ll B[bitcount];

  for(ll i=0;i<bitcount-1;i++){
    if(bset[i]==0){
      A[bitcount-i-1] = 1;
      B[bitcount-i-1] = 1;
    }else if(bset[i]==1){
      A[bitcount-i-1] = 0;
      B[bitcount-i-1] = 1;
    }
  }
  if(bset[bitcount-1] == 1){
    A[0] = 1;
    B[0] = 0;
  }
 ll a = 0;
 ll b = 0;
 ll j=bitcount-1;
  for(ll i=0;i<bitcount;i++){
      a+=A[i]*pow(2,j--);
  }

  j=bitcount-1;
  for(ll i=0;i<bitcount;i++){
    b+=B[i]*pow(2,j--);
  }
 cout<<a*b;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin>>t;
    while(t--){
      solve();
      cout<<"\n";
    }
    return 0;
}
