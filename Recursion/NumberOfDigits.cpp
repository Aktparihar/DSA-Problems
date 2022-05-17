#include<iostream>
using namespace std;

int countDigits(int n){
  int count=0;
  if(n>0){
    count = count+1;
    countDigits(n/10);

  }
  return count;
}
int main(){
  int count = countDigits(361);
  cout<<count;
  return 0;
}
