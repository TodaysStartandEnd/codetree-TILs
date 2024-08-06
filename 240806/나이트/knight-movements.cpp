#include <iostream>
#include <utility>
#include <queue>
#include <algorithm>
using namespace std;

queue<pair<int,int>> q;
int step[101][101];
bool visited[101][101];
int n;

bool InRange(int x, int y)
{
    return 0<=x && x < n &&0<=y&& y<n;
}
void Push(int x,int y, int s)
{
    if(step[x][y] == 0)
    {
        step[x][y] = s;
    }
    else
    {
        step[x][y] = min(s,step[x][y]);
    }
    visited[x][y] = true;
    q.push(make_pair(x,y));
}
void BFS()
{
    int dx[8] = {1,2,2,1,-1,-2,-2,-1};
    int dy[8] = {2,1,-1,-2,-2,-1,1,2};
    while(!q.empty())
    {
        pair<int,int> cur = q.front();
        q.pop();

        int x = cur.first;
        int y = cur.second;

        for(int i=0; i<8; i++)
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
    cin >> n ;
    int r1,c1,r2,c2;
    cin >> r1>>c1>>r2>>c2;
    Push(r1-1,c1-1,0);
    BFS();
    if(step[r2-1][c2-1] == 0)
    {
        cout << -1 <<'\n';
    }
    else
    {
        cout << step[r2-1][c2-1] <<'\n';
    }
    return 0;
}