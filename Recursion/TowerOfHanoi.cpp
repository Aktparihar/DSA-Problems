#include<iostream>
using namespace std;

void towerOfHanoi(int n,char A,char B,char C){
  if (n == 1){
    cout<<"Move 1 from " <<  A << " to " << C << endl;
    return;
  }
  towerOfHanoi(n-1,A,C,B);
  cout<<"Move " << n << " from " <<  A << " to " << C << endl;
  towerOfHanoi(n-1,B,A,C);
}
int main() {
	int n = 2;
  towerOfHanoi(n, 'A', 'B', 'C');
  return 0;
}
