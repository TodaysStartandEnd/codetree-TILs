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
    if(num == 0)
    {
        Print();
        return;
    }
    for(int i=n; i>=1 ; i--)
    {
        if(visited[i])
        {
            continue;
        }
        visited[i] = true;
        ans.push_back(i);
        
        Choose(num-1);

        visited[i] = false;
        ans.pop_back();

    }
}

int main() 
{
    cin >> n;
    Choose(n);
    return 0;
}