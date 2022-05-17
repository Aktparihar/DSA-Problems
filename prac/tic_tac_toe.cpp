#include<bits/stdc++.h>
#define ll long long
using namespace std;


void solve(){
  vector<char> tic;
  char p;
  int X=0;
  int O=0;
  for(int i=0;i<9;i++){
    cin>>p;
    tic.push_back(p);
  }
  char c = '_';
  auto it = find(tic.begin(),tic.end(),c);
  if(it!=tic.end()){
    cout<<"found"<<endl;
    int under = count(tic.begin(),tic.end(),c);
    int x_under = count(tic.begin(),tic.end(),'X');
    int o_under = count(tic.begin(),tic.end(),'O');
    if(under%2 == 0){
      if(x_under - o_under == 1){
        cout<<"possible";
      }else{
        cout<<3;
      }
    }else{
      if(x_under == o_under){
        cout<<"possible";
      }else{
        cout<<3;
      }
    }
  }else{
    cout<<"not found";
    for(auto x:tic){
      if(x=='X'){
        X++;
      }
      if(x=='O'){
        O++;
      }
    }
  }

  if(X==5 && O==4){
    cout<<1;
  }





  //int count=0;
  // for(auto x:tic){
  //   cout<<x<<" ";
  //   count++;
  //   if(count==3){
  //     cout<<endl;
  //     count = 0;
  //   }
  // }
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("outtt.txt", "w", stdout);
    #endif
    int t;
    cin>>t;
    while(t--){
      solve();
    }
    return 0;
}
