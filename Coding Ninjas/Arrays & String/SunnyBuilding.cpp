#include<bits/stdc++.h>
#include<climits>
using namespace std;

int solve(){
  int building;
  cin>>building;
  int count=0;
  int currentBuilding;
  currentBuilding = INT_MIN;

  for(int i=0;i<building;i++){
    int buildingNumber;
    cin>>buildingNumber;
    if(buildingNumber >= currentBuilding ){
      count++;
      currentBuilding = buildingNumber;
    }
  }
  return count;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("outt.txt", "w", stdout);
    #endif
    int number;
    cin>>number;
    while(number--){
      cout<<solve()<<endl;
    }

    return 0;
}
