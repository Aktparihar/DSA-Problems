#include<iostream>
#include <unordered_map>
using namespace std;

int main(){
  unordered_map<string,int> m;
  m["akt"] = 10;
  m["par"] = 20;
  m.insert({"qwe",23});
  for(auto x:m){
    cout<<x.first<<" "<<x.second<<endl;
  }
  return 0;
}
