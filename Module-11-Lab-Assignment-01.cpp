#include<bits/stdc++.h>
using namespace std;
int main()
{
    int vertex;
    cin>>vertex;
    int adj_matrix[vertex][vertex];
    vector<int>adj_list[vertex];
    for(int i=0;i<vertex;i++)
    {
        for(int j=0;j<vertex;j++)
        {
            adj_matrix[i][j] = 0;
            cin>>adj_matrix[i][j];
            if(adj_matrix[i][j] != 0)
            {
                adj_list[i].push_back(j);
            }
        }
    }

    cout<<endl;

    for(int i=0;i<vertex;i++)
    {
        cout<<i<<" : ";
        for(int j:adj_list[i])
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    return 0;
}