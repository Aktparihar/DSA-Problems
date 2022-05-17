#include<bits/stdc++.h>
using namespace std;

struct Myhash{
  int BUCKET;
  list<int> *table;
  Myhash(int b){
    BUCKET = b;
    table = new list<int> [BUCKET];
  }

  void insert(int key){
    int i = key%BUCKET;
    table[i].push_back(key);
  }
  void remove(int key){
    int i = key%BUCKET;
    table[i].remove(key);
  }
  bool search(int key){
    int i = key%BUCKET;
    for(auto x: table[i]){
      if(x==key){
        return true;
      }
    }
    return false;
  }
};
int main(){
  Myhash mh(7);
  mh.insert(10);
  mh.insert(20);
  mh.insert(30);
  mh.insert(17);
  cout<<mh.search(10)<<endl;
  mh.remove(20);
  cout<<mh.search(20)<<endl;
}
