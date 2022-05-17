#include<iostream>
using namespace std;
#include<math.h>

void Subset(string str,string curr="",int index=0){
  if(index == str.length()){
    cout<<curr<<" ";
    return;
  }
  Subset(str,curr,index+1);
  Subset(str,curr+str[index],index+1);
}
int main(){
  Subset("ABC");
  return 0;
}
