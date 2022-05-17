#include<bits/stdc++.h>
using namespace std;

void mergeArray(int m[],int n[], int a, int b){
  int c[a+b];
  for(int i=0;i<a;i++){
    c[i] = m[i];
  }
  for(int j=0;j<b;j++){
    c[j+b] = n[j];
  }
  sort(c,c+a+b);
  for(int i=0;i<a+b;i++){
    cout<<c[i]<<" ";
  }
}
int main(){
  int a[] = {1,2,3,4,5};
  int b[] = {11,12,13,14,15};
  mergeArray(a,b,5,5);
  return 0;
}
