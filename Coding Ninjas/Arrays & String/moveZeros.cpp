#include<bits/stdc++.h>
#include<climits>
using namespace std;

void swapss(int &a,int &b){
  int c;
  c = a;
  a = b;
  b = c;
}

void solve(){
  int t;
  cin>>t;
  vector<int> v;
  for(int i=0;i<t;i++){
    int element;
    cin>>element;
    v.push_back(element);
  }
  // int first = 0;
  // int last = v.size()-1;
  // while(first<last){
  //   if(v[first]==0){
  //     swapss(v[first],v[last]);
  //     last--;
  //   }else{
  //     first++;
  //   }
  // }

  // int count=0;
  // for(int i=0;i<v.size();i++){
  //   if(v[i]==0){
  //     count++;
  //   }else{
  //     cout<<v[i]<<" ";
  //   }
  // }


  // vector<int> m;
  // int count=0;
  // for(int i=0;i<v.size();i++){
  //   if(v[i]!=0){
  //     m.push_back(v[i]);
  //   }else{
  //     count++;
  //   }
  // }
  // for(int i=0;i<count;i++){
  //   m.push_back(0);
  // }
  // for(int i=0;i<m.size();i++){
  //   cout<<m[i]<<" ";
  // }

  int ind=0;
  for(int i=0;i<v.size();i++){
    if(v[i] != 0){
      swapss(v[i],v[ind]);
      ind++;
    }
  }
  for(int k=0;k<v.size();k++){
    cout<<v[k]<<" ";
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
