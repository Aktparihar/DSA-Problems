#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v){
  adj[u].push_back(v);
  adj[v].push_back(u);
}

void printEdge(vector<int> adj[], int v){
  for(int i=0;i<v;i++){
    for(int x:adj[i]){
      cout<<x<<" ";
    }
    cout<<"\n";
  }
}

void BFS(vector<int> adj[], int s, bool visited[]){
  queue<int> q;
  visited[s] = true;
  q.push(s);
  while(q.empty() == false){
    int u = q.front();
    cout<<u<<" ";
    q.pop();
    for(int v: adj[u]){
      if(visited[v] == false){
        visited[v] = true;
        q.push(v);
      }
    }
  }
}

void BFSDisconnect(vector<int> adj[], int v){
  bool visited[v+1];
  for(int i=0;i<v;i++){
    visited[i] = false;
  }
  for(int i=0;i<v;i++){
    if(visited[i] == false){
      BFS(adj,i,visited);
    }
  }
}
w
int main(){
  int v = 7;
  vector<int> adj[v];
  addEdge(adj, 0, 1);
  addEdge(adj, 0, 2);
  addEdge(adj, 1, 3);
  addEdge(adj, 2, 3);
  addEdge(adj, 4, 5);
  addEdge(adj, 5, 6);
  addEdge(adj, 4, 6);
  printEdge(adj, v);
  cout<<endl;
  BFSDisconnect(adj,v);
  return 0;
}
