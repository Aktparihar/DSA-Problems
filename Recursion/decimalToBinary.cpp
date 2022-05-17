#include<iostream>
using namespace std;

void binaryToDecimal(int n){
  if(n==0){
    return;
  }
  binaryToDecimal(n/2);
  cout<<n%2<<" ";
}
int main(){
  binaryToDecimal(16);
  return 0;
}
