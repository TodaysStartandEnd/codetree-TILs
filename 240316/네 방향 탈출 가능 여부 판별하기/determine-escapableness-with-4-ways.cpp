#include <iostream>
#include <queue>
using namespace std;

int arr[101][101];
int check[101][101];
int x[4]={1,-1,0,0};
int y[4]={0,0,1,-1};
bool flag = 0;

int main() {
    int n, m;
    queue<pair<int,int>> q;
    cin >> n >> m ;
    for(int i=0;i<n;i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> arr[i][j];
        }
    }
    q.push({0,0});
    check[0][0] =1;
    while(!q.empty())
    {
        int a = q.front().first;
        int b = q.front().second;
        q.pop();
        for(int i=0; i<4; i++)
        {
            int nx = a + x[i];
            int ny = b + y[i];
            // 범위 내 없음
            if(check[nx][ny]==1 || nx <0 || nx >=n || ny <0 || ny >=m)
            {
                continue;
            }
            // 탐색하는 위치가 아님
            else if(arr[nx][ny]==0)
            {
                continue;
            }
            // 탐색 위치
            else
            {
                if(nx == n-1 && ny == m-1)
                {
                    flag =1 ;
                    break;
                }
                check[nx][ny] = 1;
                q.push({nx,ny});
            }
        }

    }
    if(flag == 1)
    {
        cout << 1;
    }
    else{
        cout << 0;
    }
    return 0;
}