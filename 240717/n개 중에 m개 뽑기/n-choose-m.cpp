#include <iostream>
#include <vector>
using namespace std;

vector<int> v;
int n, m;
bool check[11];

void Choose(int num) 
{
    if (v.size() == m) 
    {
        for (int i = 0; i < v.size(); i++) 
        {
            cout << v[i] << " ";
        }
        cout << '\n';
        return;
    }
    for (int i = num; i <= n; i++) 
    {
        if (!check[i]) 
        {
            v.push_back(i);
            check[i] = 1;
            Choose(i + 1);
            v.pop_back();
            check[i] = 0;
        }
    }
}

int main() 
{
    cin >> n >> m;
    Choose(1);
    return 0;
}