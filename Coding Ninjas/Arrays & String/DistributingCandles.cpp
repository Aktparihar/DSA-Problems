#include<bits/stdc++.h>
#include<climits>
using namespace std;


void solve(){
  int array;
  cin>>array;
  int count=0;
  vector<int> v;
  for(int i=0;i<array;i++){
    int a;
    cin>>a;
    v.push_back(a);
  }
  unordered_map<int,int> m;
  for(int i=0;i<v.size();i++){
    if(m.find(v[i])==m.end()){
      m.insert({v[i],1});
      count++;
    }else{
      m[v[i]]++;
    }
  }
  int ans = count<v.size()/2?count:v.size()/2;
  cout<<ans;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("outt.txt", "w", stdout);
    #endif
    solve();
    return 0;
}
