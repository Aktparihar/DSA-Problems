#include<bits/stdc++.h>
#include<climits>
using namespace std;

int Fun(vector<string> v,int i,string s){

  if(i == v.size()){
    int freq[26] = {0};
    for(int k=0;k<s.length();k++){
      if(freq[s[k] - 'a']==1)return 0;
      freq[s[k]-'a']++;
    }
    return s.length();
  }

  int op1,op2;
  op1 = op2 = INT_MIN;
  if(s.length()+v[i].length()<=26){
    op1 = Fun(v,i+1,s+v[i]);
  }
  op2 = Fun(v,i+1,s);
  return max(op1,op2);
}

int UniqueCharacterString(vector<string> v){
  string s = "";
  return Fun(v,0,s);
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("outt.txt", "w", stdout);
    #endif

    vector<string> s;
    int number;
    cin>>number;
    for(int i=0;i<number;i++){
      string str;
      cin>>str;
      s.push_back(str);
    }
    cout<<UniqueCharacterString(s);

    return 0;
}
