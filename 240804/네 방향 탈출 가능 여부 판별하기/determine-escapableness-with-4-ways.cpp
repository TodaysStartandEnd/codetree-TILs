#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

int n, m;
vector<vector<int>> grid;
map<pair<int, int>, vector<pair<int, int>>> adjList;

void addEdge(int x1, int y1, int x2, int y2) 
{
    adjList[{x1, y1}].push_back({x2, y2});
}

bool bfs() 
{
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    queue<pair<int, int>> q;

    q.push({0, 0});
    visited[0][0] = true;

    while (!q.empty()) 
    {
        pair<int, int> current = q.front();
        q.pop();

        int x = current.first;
        int y = current.second;

        if (x == n - 1 && y == m - 1) 
        {
            return true;
        }

        for (int i = 0; i < directions.size(); i++) 
        {
            int nx = x + directions[i].first;
            int ny = y + directions[i].second;

            if (nx >= 0 && nx < n && ny >= 0 && ny < m && !visited[nx][ny] && grid[nx][ny] == 1) 
            {
                visited[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }

    return false;
}

int main() 
{
    cin >> n >> m;

    grid = vector<vector<int>>(n, vector<int>(m));

    for (int i = 0; i < n; ++i) 
    {
        for (int j = 0; j < m; ++j) 
        {
            cin >> grid[i][j];
        }
    }

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            if (grid[i][j] == 1) 
            {
                for (int d = 0; d < directions.size(); d++) 
                {
                    int ni = i + directions[d].first;
                    int nj = j + directions[d].second;
                    if (ni >= 0 && ni < n && nj >= 0 && nj < m && grid[ni][nj] == 1) 
                    {
                        addEdge(i, j, ni, nj);
                    }
                }
            }
        }
    }

    cout << bfs() << '\n';

    return 0;
}