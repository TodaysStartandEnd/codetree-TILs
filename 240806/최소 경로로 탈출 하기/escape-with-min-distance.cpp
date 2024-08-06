#include <iostream>
#include <utility>
#include <queue>
using namespace std;

queue<pair<int,int>> q;
int step[101][101];
bool visited[101][101];
int n,m;

bool InRange(int x, int y)
{
    return 0<=x && x < n &&0<=y&& y<m;
}
void Push(int x,int y, int s)
{
    step[x][y] = s;
    visited[x][y] = true;
    q.push(make_pair(x,y));
}
void BFS()
{
    int dx[4] = {1,0,-1,0};
    int dy[4] = {0,1,0,-1};
    while(!q.empty())
    {
        pair<int,int> cur = q.front();
        q.pop();

        int x = cur.first;
        int y = cur.second;

        for(int i=0; i<4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(InRange(nx,ny)&&!visited[nx][ny])
            {
                Push(nx, ny, step[x][y] +1);
            }

        }
    }
    
}

int main() 
{
    cin >> n >> m;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            bool v;
            cin >> v;
            visited[i][j] = !v;
        }
    }
    Push(0,0,0);
    BFS();
    if(step[n-1][m-1] == 0)
    {
        cout << -1 <<'\n';
    }
    else
    {
        cout << step[n-1][m-1] <<'\n';
    }
    return 0;
}