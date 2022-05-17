#include<bits/stdc++.h>
#include<climits>
using namespace std;

int update(int n){
  int sum = 0;
  while(n>0){
    int d = n%10;
    sum = sum+d*d;
    n /=10;
  }
  return sum;
}


bool check(map<int,bool>m,int n){
  if(n==1){
    return true;
  }
  if(m.find(n)!=m.end()){
    return false;
  }
  m.insert(make_pair(n,true));
  n = update(n);
  return check(m,n);
}


bool isHappy(int n){
  map<int,bool>m;
  return check(m,n);
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("outt.txt", "w", stdout);
    #endif
    int number;
    cin>>number;
    bool ans = isHappy(number);
    if(ans){
      cout<<"true";
    }else{
      cout<<"false";
    }
    return 0;
}
