#include<bits/stdc++.h>
using namespace std;
//Bipartite Graph Check--
const int N = 1005;
int visited[N];
vector<int>adj_list[N];
bool bfs(int src)
{
    queue<int>q;
    q.push(src);
    visited[src] = 1;
    while (!q.empty())
    {
        int head = q.front();
        q.pop();
        for(int adj_node:adj_list[head])
        {
        if(visited[adj_node] == 0)
        {
            if(visited[head] == 1)
            
            {
             visited[adj_node] = 2;
            } 
            
                
            
            else visited[adj_node] = 1;
        {
               q.push(adj_node);
        }
           

            
        }
        
        else if(visited[adj_node] == visited[head])
        {
            return false;
        }


        }
    }
    return true;
     
}
int main()
{
    for(int i=0;i<N;i++)
    {
        visited[i] = 0;
    }
    int vertex,edge;
    cin>>vertex>>edge;
    for (int i = 0; i <edge; i++)
    {
        int u,v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    bool bip;
    for(int i=0;i<vertex;i++)
    {
        if(visited[i] == 0 )bip = bfs(i);
        
        if(bip == false)
        {
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";
    return 0;
    
}