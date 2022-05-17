#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u,int v){
  adj[u].push_back(v);
  adj[v].push_back(u);
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

bool DFSRec(vector<int> adj[], int s, bool visited[], int parent){
  visited[s] = true;
  for(int u:adj[s]){
    if(visited[u]==false){
      if(DFSRec(adj,u,visited,s) == true){
        return true;
      }
      else if(u!=parent){
        return true;
      }
    }
  }
}

bool DetectCycle(vector<int> adj[],int v){
  bool visited[v];
  for(int i=0;i<v;i++){
    visited[i] = false;
  }
  for(int i=0;i<v;i++){
    if(visited[i]==false){
      if(DFSRec(adj,i,visited,-1) == true){
        return true;
      }
    }
  }
  return false;
}

int main(){
  int v = 4;
  vector<int> adj[v];
  addEdge(adj,0,1);
  addEdge(adj,1,2);
  addEdge(adj,1,3);
  addEdge(adj,2,3);
  printGraph(adj,v);
  cout<<endl;
  cout<<DetectCycle(adj,v);
  return 0;
}
