#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void pattern(string &str,string &pat){
  int m = str.length();
  int n = pat.length();
  for(int i = 0;i<=(m-n);i++){

    int j;
    for(j=0;j<n;j++){
      if(pat[j] != str[i+j]){
        break;
      }
    }
      if(j == n){
        cout<<i<<" ";
      }
  }
}
int main(){
  string str = "ABABABCD";
  string pat = "ABAB";
  pattern(str,pat);
  return 0;
}
