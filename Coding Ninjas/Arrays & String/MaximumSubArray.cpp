#include<bits/stdc++.h>
#include<climits>
using namespace std;


int solve(){
  int n;
  cin>>n;
  vector<int> v;
  for(int i=0;i<n;i++){
    int element;
    cin>>element;
    v.push_back(element);
  }

  int maxi = INT_MIN;
  int sum = 0;
  for(int i=0;i<v.size();i++){
    if(v[i]>0){
      sum+=v[i];
      maxi = max(sum,maxi);
    }else if(v[i]<0){
      sum = 0;
    }
  }
  return maxi;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("outt.txt", "w", stdout);
    #endif
    int t;
    cin>>t;
    while(t--){
      cout<<solve()<<endl;
    }
    return 0;
}
