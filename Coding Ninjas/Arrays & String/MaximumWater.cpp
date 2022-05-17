#include<bits/stdc++.h>
#include<climits>
using namespace std;


int MaxWater(vector<int> heights){
    int left = 0;
    int right = heights.size()-1;
    int area = 0;
  while(left < right){
    area = max(area,min(heights[left],heights[right])*(right-left));
    if(heights[left]<heights[right]){
      left++;
    }else{
      right--;
    }
  }
  return area;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("outt.txt", "w", stdout);
    #endif

    int number;
    cin>>number;
    vector<int> heights;
    for(int i=0;i<number;i++){
      int x;
      cin>>x;
      heights.push_back(x);
    }
    cout<<MaxWater(heights);
    return 0;
}
