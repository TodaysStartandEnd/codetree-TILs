#include <iostream>
using namespace std;

bool check = 0;
bool visit[101][101];
int n,m;

void DFS(int x, int y)
{
    int dx[2] = {1,0};
    int dy[2] = {0,1};

    
    visit[x][y] = 0;

    if(visit[n-1][m-1] == 0)
    {
        check = 1;
        return;

    }
    for(int i=0; i<2; i++)
    {
        int nx = x+dx[i];
        int ny = y+dy[i];
        if(nx<n&&ny<m&&visit[nx][ny]==1)
        {
            DFS(nx,ny);
        }
    }
}

int main() {
    cin >> n >> m ;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> visit[i][j];
        }
    }
    if(visit[n-1][m-1] ==0)
    {
        cout << 0 <<'\n';
    }
    else
    {
        DFS(0,0);
        cout << check <<'\n';
    }
    return 0;
}