#include<bits/stdc++.h>
#include<climits>
using namespace std;

int next(vector<int> v,int i){
  return (i*v[i]+v.size())%v.size();
}

bool LoopOrNot(vector<int> v){
  int n=v.size();
  for(int i=0;i<n;i++){
    int fast = i;
    int slow = i;
    if(v[i] == 0){
      continue;
    }

    while(v[slow]*v[next(v,slow)]>0 &&
          v[fast]*v[next(v,fast)]>0 &&
          v[fast]*v[next(v,next(v,fast))]>0){
            slow = next(v,slow);
            fast = next(v,fast);
            if(fast == slow){
              if(slow == next(v,slow)){
                break;
              }
              return true;
            }
          }
          slow = i;
          int val = v[slow];
          while(val*v[slow]>0){
            int x = slow;
            slow = next(v,slow);
            v[x] = 0;
          }


          
  }
  return false;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("outt.txt", "w", stdout);
    #endif
  int number;
  cin>>number;
  vector<int> v;
  for(int i=0;i<number;i++){
    int element;
    cin>>element;
    v.push_back(element);
  }
  cout<<LoopOrNot(v);
    return 0;
}
