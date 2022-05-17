#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// bool Pallindrome(string Sstr){
//   string rev = Sstr;
//   reverse(rev.begin(),rev.end());
//   return (rev==Sstr);
// }
bool Pallin(string Astr){
  int begin = 0;
  int end=Astr.length()-1;
  while(end>begin){
    if(Astr[begin] != Astr[end]){
      return false;
    }
    begin++;
    end--;
  }
  return true;
}

int main(){
  string str = "ABCBA";
  if(Pallin(str)){
    cout<<"Yes";
  }
  else{
    cout<<"No";
  }
  return 0;
}
