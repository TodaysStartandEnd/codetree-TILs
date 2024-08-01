#include <iostream>
#include <algorithm>
using namespace std;

int visit[26][26];
int cnt[26]={0,};
int idx = 0;
int n;

void DFS(int x, int y)
{
    int ax[4] = {1,0,-1,0};
    int ay[4] = {0,1,0,-1};
    visit[x][y] = 0;
    for(int i=0; i<4; i++)
    {
        int nx= x+ax[i];
        int ny= y+ay[i];
        if(nx>=0&&ny>=0&&nx<n&&ny<n&&visit[nx][ny]==1)
        {
            cnt[idx]++;
            DFS(nx,ny);   
        }

    }

}

int main() 
{
    cin >> n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> visit[i][j];
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(visit[i][j] ==0)
            {
                continue;
            }
            else
            {
                DFS(i,j);
                idx++;
                
            }
        }
    }
    sort(cnt,cnt+idx);

    cout <<idx <<'\n';
    for(int i=0; i<idx; i++)
    {
        cout << cnt[i]+1<< '\n';
    }
    return 0;
}