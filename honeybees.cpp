#include<bits/stdc++.h>
using namespace std;
int main(){
	int T;
	cin>>T;
	int sum=0;
	while(T){
	   int x,y;
	   int arr[x][y];
	   cin>>x>>y;
	   for(int i=0;i<x;i++){
		   for(int j=0;j<y;j++){
			   int element;
			   cin>>element;
               arr[i][j] = element;
		   }
	   }
	   int test;
	   cin>>test;
	   while(test){
			int hop,x1,x2;
			cin>>hop>>x1>>x2;
			if(hop==1){
				sum = arr[x1+1][x2-1]+arr[x1+1][x2-1]+arr[x1+1][x2+1]+arr[x1][x2+1]+arr[x1][x2-1];
			}
			if(hop==2){
				sum = arr[x1+2][x2-1]+arr[x1+2][x2]+arr[x1+2][x2+1]+arr[x1+1][x2+2]+arr[x1][x2+2];
			}
			cout<<sum;
			test--;
	   }

       T--;
	}
	return 0;
}
