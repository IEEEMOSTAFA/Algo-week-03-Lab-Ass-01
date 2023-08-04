#include<bits/stdc++.h>
using namespace std;
const int N = 1000;
vector<int>adj_list[N];
int main()
{
 int vertex,edge;
 cin>>vertex>>edge;
 for(int i=0;i<edge;i++)
 {
  int u,v;
  cin>>u>>v;
  adj_list[u].push_back(v);
  adj_list[v].push_back(u);
 }

 int count = 0;
 for(int i= 0;i<edge;i++)
 {
    if(adj_list[i].size() != 0)
    count++;
 }
 
 cout<<count;
 return 0;
}