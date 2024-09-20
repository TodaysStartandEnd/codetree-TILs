#include<iostream>
#include<queue>
#include<utility>
using namespace std;

bool v[101][101];
queue<pair<int,int>> q;
int cnt = 0;
int n, k;


void bfs()
{
    int x[4] = {1,0,-1,0};
    int y[4] = {0,1,0,-1};
    while(!q.empty())
    {
        int a= q.front().first;
        int b= q.front().second;
       
        q.pop();
        for(int i=0; i<4; i++)
        {
            int nx = a +x[i];
            int ny = b + y[i];
           
            if(nx>=1&&ny>=1&&nx<=n&& ny<=n&&v[nx][ny]== 0)
            {
                cnt ++;
                v[nx][ny]= 1;
                q.push({nx,ny});

            }
        }
    }
    
    
}

int main()
{
    cin >> n >> k;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cin >> v[i][j];
        }
    }

    for(int i=0; i<k; i++)
    {
        int a, b;
        cin >> a >> b;
        if(v[a][b] == 0)
        {
            cnt ++;
        }
        v[a][b] = 1;
        q.push({a,b});
        bfs();
    }
    cout << cnt ;
    
}