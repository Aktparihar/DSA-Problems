#include<iostream>
using namespace std;

bool Pallindrome(string Sstr, int start, int end){
  if(start>=end){
    return true;
  }
  return (Sstr[start]==Sstr[end] && Pallindrome(Sstr,start+1,end-1));
}
int main(){
  if(Pallindrome("abbcbba",0,6)){
    cout<<"Yes";
  }
  else{
    cout<<"No";
  }
  return 0;
}
