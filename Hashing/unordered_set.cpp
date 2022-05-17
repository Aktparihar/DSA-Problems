#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
  unordered_set<int> s;
  s.insert(10);
  s.insert(55);
  s.insert(55);
  s.insert(20);
  for(auto it =s.begin(); it!=s.end();it++){
    cout<<(*it)<<endl;
  }
  cout<<"Size of set is: "<<s.size()<<endl;
  if(s.find(55) == s.end()){
    cout<<"Not found "<<*(s.find(55));
  }
  else{
    cout<<"Found "<<*(s.find(55))<<endl;
  }
  if(s.count(15)){
    cout<<"Found "<<endl;
  }
  else{
    cout<<"Not Found "<<endl;
  }
  return 0;
}
