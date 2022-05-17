#include<bits/stdc++.h>
#include <string>
using namespace std;

int findmin(int A,int B,int C){
  if(A<B && A<C){
    return A;
  }else if(B<C){
    return B;
  }else{
    return C;
  }
}

void solve(){

  // if(E==H){
  //   x = E;
  // }else if(E>H){
  //   y = E-H;
  //   x = x+(y/2);
  // }else{
  //   y = H-E;
  //   x = x+(y/3);
  // }
  // int sum=0;
  // if(N>x){
  //   cout<<-1;
  // }else{

  // A - 2 eggs to make an omelette
  // B - 3 chocolate bars for a chocolate milkshake
  // C - 1 egg and 1 chocolate bar for a chocolate cake

  int N,E,H,A,B,C;
  cin>>N>>E>>H>>A>>B>>C;
  int x=E;
  int y=H;

  if(E==H){
    if(N>E){
      cout<<-1;
      return;
    }
  }else if(E>H){
    x = (E-H)/2;
  }else{
    x = (H-E)/3;
  }

    while(N>0){
      int min = findmin(A,B,C);
      if(min==A){
        sum = sum+(E/2)*A;
        N = N-(E/2);
        A = INT_MAX;
        E = E%2;
      }else if(min == B){
        sum = sum+(H/3)*B;
        N = N-(H/3);
        B = INT_MAX;
        H = H%3;
      }else if(min==C){
        if(E==H && N<E){
          sum = sum+(N*C);
          N = 0;
        }else{
          if(E==H){
            sum = sum+(E*C);
            E = E - E;
            H = H - E;
            N = 0;
          }else if(E<H){
            sum = sum+(E*C);
            N = N-E;
            E = E - E;
            H = H - E;
          }else{
            sum = sum+(H*C);
            N = N-H;
            E = E - H;
            H = H - H;
          }
          C = INT_MAX;
        }
      }
   }
   cout<<sum;
  }
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("outt.txt", "w", stdout);
    #endif
    int t;
    cin>>t;
    while(t--){
      solve();
      cout<<"\n";
    }
    return 0;
}
