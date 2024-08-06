#include <iostream>
#include <utility>
#include <queue>
using namespace std;

queue<pair<int,int>> q;
int count = 0;
bool visited[101][101];
int n,k;

bool InRange(int x, int y)
{
    return 0<=x && x < n &&0<=y&& y<n;
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
                count++;
                visited[nx][ny] = true;
                q.push({nx,ny});
            }

        }
    }
    
}

int main() 
{
    cin >> n >> k;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            
            cin >> visited[i][j];
        }
    }
    for(int i=0; i<k; i++)
    {
        int x, y;
        cin >> x >> y;
        if(visited[x-1][y-1] == 1)
        {
            continue;
        }
        count++;
        visited[x-1][y-1] =1;
        q.push({x-1,y-1});
        BFS();

    }

    cout << count <<'\n';
    return 0;
}