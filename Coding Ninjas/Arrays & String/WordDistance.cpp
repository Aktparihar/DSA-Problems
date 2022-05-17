#include<bits/stdc++.h>
#include<climits>
using namespace std;


void solve(){
  int n;
  cin>>n;
  vector<string> s;
  for(int i=0;i<s.size();i++){
    string str;
    cin>>str;
    s.push_back(str);
  }
  string s1,s2;
  cin>>s1>>s2;
  vector<string>::iterator it1;
  vector<string>::iterator it2;
  it1 = find(s.begin(), s.end(), s1);
  it2 = find(s.begin(),s.end(),s2);

  cout<<it1-s.begin()<<" "<<it2-s.begin();
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("outt.txt", "w", stdout);
    #endif
    solve();
    return 0;
}
