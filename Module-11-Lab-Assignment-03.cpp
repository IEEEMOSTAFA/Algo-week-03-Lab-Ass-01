#include<bits/stdc++.h>
using namespace std;

const int N = 100e5;
int visited[N];
vector<int>adj_list[N];
bool cycle_exist = false;

bool dfs(int src)
{
    visited[src] = 1;
    for(int adj_node:adj_list[src])
    {
     if(visited[adj_node] == 0)
     {
      dfs(adj_node);
     }
        
     
     if(visited[adj_node] == 1)
     {
        cycle_exist = true;
          return 0;
     }
    }
    visited[src] = 2;
     return false;
    
}
int main()
{
    for(int i = 0;i<N;i++)
    {
        visited[i] = 0;
    }
    int vertex,edge;
    cin>>vertex>>edge;
    for(int i=0;i<edge;i++)
    {
        int u,v;
        cin>>u>>v;
        adj_list[u].push_back(v);
    }
    dfs(0);
    if(cycle_exist == true)
    cout<<"Yes";
    else
    cout<<"No";
    return 0;
}