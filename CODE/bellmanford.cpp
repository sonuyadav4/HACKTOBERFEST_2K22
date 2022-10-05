#include<bits/stdc++.h>
using namespace std;

#define INF INT_MAX

int main()
{
        int i,j,uv=0;
        int Dist[4] = {0,INF,INF,INF};
        int W[4][4] = {{0,1,0,99},{INF,0,1,INF},{INF,INF,0,INF},{INF,-300,INF,0}};
        int pred[4] = {0,-1,-1,-1};
        int edge[5][2] = {{0,1},{0,2},{0,3},{1,2},{3,1}};

        for(i=0;i<4;i++)
        for(j=0;j<5;j++)
        {
                if(Dist[edge[j][uv]]+W[edge[j][uv]][edge[j][uv+1]] < Dist[edge[j][uv+1]])
                {
                        Dist[edge[j][uv+1]] = Dist[edge[j][uv]]+ W[edge[j][uv]][edge[j][uv+1]];
                        pred[edge[j][uv+1]] = edge[j][uv];
                }
        }
        for(i=0;i<4;i++)
        cout<<pred[i]<<" ";
        cout<<endl;
        for(i=0;i<4;i++)
        cout<<Dist[i]<<" ";
        cout<<endl;
        return 0;
}
