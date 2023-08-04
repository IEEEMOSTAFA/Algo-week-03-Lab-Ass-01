/*

6 7
0 1
0 3
0 4
1 2 
1 5
2 4
4 5

*/

#include<bits/stdc++.h>
using namespace std;
const int N = 4000;
vector<int>adj_list[N];
int level[N];
bool visited[N];
void bfs(int src)
{
    visited[src] = true;
    level[src] = 0;
    queue<int>q;
    q.push(src);
    while (!q.empty())
    {
        int head = q.front();
        q.pop();
        for(int adj_node:adj_list[head])
        {
            if(visited[adj_node] == false)
            {
                visited[adj_node] =true;
                level[adj_node] = level[head] + 1;
                q.push(adj_node);
            }
        }
    }
    
}
int main()
{
int vertex,edge;
cin>>vertex>>edge;

for(int i=0;i<vertex;i++)
{
    int u,v;
    cin>>u>>v;
    adj_list[u].push_back(v);
    adj_list[v].push_back(u);
}
bfs(0);
for(int i=0 ;i<vertex;i++)
{
    cout<<"Node  "<<i<<" -> level:  "<<level[i]<<endl;
}
return 0;

}