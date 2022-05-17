#include<bits/stdc++.h>
using namespace std;

int squareRoot(int x){
  int i = 1;
  while(i*i<=x){
    i++;
  }
  return (i-1);
}

int main(){
  cout<<squareRoot(15);
  return 0;
}
