#include<bits/stdc++.h>
using namespace std;

// int leftMost(string &s1){
//   for(int i=0;i<s1.length();i++){
//     for(int j=i+1;j<s1.length();j++){
//       if(s1[i] == s1[j]){
//         return i;
//       }
//     }
//   }
//   return -1;
// }
const int CHAR = 256;
int leftMost2(string &s2){
  int count[CHAR] = {0};
  for(int i=0;i<s2.length();i++){
    count[s2[i]]++;
  }
  for(int i=0;i<s2.length();i++){
    if(count[s2[i]]<=1){
      return i;
    }
  }
  return -1;
}

int main(){
  string s1 = "gabc";
  cout<<leftMost2(s1);
  return 0;
}
