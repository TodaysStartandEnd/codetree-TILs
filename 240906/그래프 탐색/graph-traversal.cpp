#include<iostream>
using namespace std;

int g[1001][1001];
bool v[1001];
int n, m;
int count =0;


void dfs(int a)
{
    for(int i=1; i<=n; i++)
    {
        if(g[a][i]==1&&v[i] == 0)
        {
            v[i]= 1;
            count ++;
            dfs(i);
            
        }
    }
}

int main()
{
    
    cin >> n >> m;
    for(int i=0;i<m; i++)
    {
        int x, y;
        cin >> x >> y;
        g[x][y]=1;
        g[y][x]=1;
    }
    for(int i=1; i<=n ; i++)
    {
        g[i][0]= 0;
    }
    v[1] = 1;
    dfs(1);
    cout << count ;
}