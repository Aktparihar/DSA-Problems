#include<bits/stdc++.h>
using namespace std;

bool validate(string &str){
  int n =str.length();
  bool flag = false;
  size_t special = str.find_first_not_of("@#$-*");

  if(str.length()>=10){
    flag = true;
  }
  if(special!=str::npos){
    flag = true;
  }
  for(int i=0;i<n;i++){
    if(isupper(str[i]) || islower(str[i])){
      flag = true;
    }
    if(str[i] >= '0' || str[i] <= '9'){
      flag = true;
    }
  }
  return flag;
}
int main(){
  string str = "geeks";
  cout<<validate(str);
  return 0;
}
