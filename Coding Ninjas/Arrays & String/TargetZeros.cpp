#include<bits/stdc++.h>
#include<climits>
using namespace std;


void solve(){
  vector<int> v;
  int n;
  cin>>n;
  int zero = n/2;
  int num = n/2;
  if(n%2==0){
    while(n>=0){
      v.push_back(num);
      num = num - 1;
      n--;
    }
    v.erase(v.begin()+zero);
  }
  else{
    while(n>0){
      v.push_back(num);
      num = num-1;
      n--;
    }
  }

  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
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
