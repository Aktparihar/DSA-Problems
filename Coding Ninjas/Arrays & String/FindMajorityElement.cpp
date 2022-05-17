#include<bits/stdc++.h>
using namespace std;

void majorityElement(vector<int> v){
  int element1 = v[0];
  int count1 = 0;

  int element2 = 0;
  int count2 = 0;

  for(int i=0;i<v.size();i++){
    if(element1 == v[i]){
      count1++;
    }else if(element2 == v[i]){
      count2++;
    }else if(count1 == 0){
      element1 = v[i];
      count1=1;
    }else if(count2 == 0){
      element2 = v[i];
      count2=1;
    }else{
      count1--;
      count2--;
    }
  }

  count1 = count2 = 0;
  for(int i=0;i<v.size();i++){
    if(element1 == v[i])count1++;
    else if(element2 == v[i])count2++;
  }

  vector<int> res;
  if(count1>v.size()/3){
    cout<<element1;
  }
  if(count2>v.size()/3){
    cout<<element1;
  }
}

int main(){
  int number;
  cout<<"Number of array element";
  cin>>number;
  vector<int> v;
  int x;
  for(int i=0;i<number;i++){
    cout<<"Enter "<<i<<"th element";
    cin>>x;
    v.push_back(i);
  }
  majorityElement(v);

  return 0;
}
