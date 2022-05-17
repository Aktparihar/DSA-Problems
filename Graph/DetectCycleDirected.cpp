#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u,int v){
  adj[u].push_back(v);
}
void printGraph(vector<int> adj[], int v){
  for(int i=0;i<v;i++){
    cout<<i<<" -> ";
    for(int x:adj[i]){
      cout<<x<<" ";
    }
    cout<<"\n";
  }
}

bool DFSRec(vector<int> adj[], int s, bool visited[], bool resSt[]){
  visited[s] = true;
  resSt[s] = true;
  for(int u:adj[s]){
    if(visited[u] == false && DFSRec(adj,u,visited,resSt) == true){
      return true;
    }else if(resSt[u] == true){
      return true;
    }
  }
  resSt[s] = false;
  return false;
}

bool DetectCycle(vector<int> adj[],int v){
  bool visited[v];
  bool resSt[v];
  for(int i=0;i<v;i++){
    visited[i] = false;
    resSt[i] = false;
  }
  for(int i=0;i<v;i++){
    if(visited[i]==false){
      if(DFSRec(adj,i,visited,resSt) == true){
        return true;
      }
    }
  }
  return false;
}

int main(){
  int v = 6;
  vector<int> adj[v];
  addEdge(adj,0,1);
	addEdge(adj,2,1);
	addEdge(adj,2,3);
	addEdge(adj,3,4);
	addEdge(adj,4,5);
	addEdge(adj,5,3);
	if(DetectCycle(adj,v) == true)
	  cout<<"Cycle found";
	else
	  cout<<"No cycle found";
  return 0;
}
