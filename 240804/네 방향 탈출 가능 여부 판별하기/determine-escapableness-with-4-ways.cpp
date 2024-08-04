#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

int n, m;
vector<vector<int>> grid;
vector<vector<pair<int, int>>> adjList;

void addEdge(int x1, int y1, int x2, int y2) 
{
    adjList[x1 * m + y1].push_back({x2, y2});
}

bool bfs() {
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    queue<pair<int, int>> q;

    q.push({0, 0});
    visited[0][0] = true;

    while (!q.empty()) {
        pair<int, int> current = q.front();
        int x = current.first;
        int y = current.second;
        q.pop();

        

        if (x == n - 1 && y == m - 1) 
        {
            return true;
        }

        for (auto dir : directions) 
        {
            int nx = x + dir.first;
            int ny = y + dir.second;

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

    grid.resize(n, vector<int>(m));
    adjList.resize(n * m);

    for (int i = 0; i < n; ++i) 
    {
        for (int j = 0; j < m; ++j) 
        {
            cin >> grid[i][j];
        }
    }

    for (int i = 0; i < n; ++i) 
    {
        for (int j = 0; j < m; ++j) 
        {
            if (grid[i][j] == 1) 
            {
                for (auto dir : directions) 
                {
                    int ni = i + dir.first;
                    int nj = j + dir.second;
                    if (ni >= 0 && ni < n && nj >= 0 && nj < m && grid[ni][nj] == 1) 
                    {
                        addEdge(i, j, ni, nj);
                    }
                }
            }
        }
    }

    if (bfs()) 
    {
        cout << 1 << endl;
    } 
    else 
    {
        cout << 0 << endl;
    }

    return 0;
}