#include <iostream>
#include <vector>
using namespace std;

int n;
bool visited[9];
vector<int> ans;

void Print()
{
    for(int i=0; i<ans.size();i++)
    {
        cout << ans[i] << " ";
    }
    cout << "\n";
}
void Choose(int num)
{
    if(num == n+1)
    {
        Print();
        return;
    }
    for(int i=1; i<=n ; i++)
    {
        if(visited[i])
        {
            continue;
        }
        visited[i] = true;
        ans.push_back(i);
        
        Choose(num+1);

        ans.pop_back();
        visited[i] = false;

    }
}

int main() 
{
    cin >> n;
    Choose(1);
    return 0;
}