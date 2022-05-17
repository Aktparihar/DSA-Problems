#include<iostream>
using namespace std;

int sumOfDigit(int n){
  if(n<10){
    return n;
  }
  return n%10 + sumOfDigit(n/10);
}
int main(){
  cout<<sumOfDigit(9);
  return 0;
}
