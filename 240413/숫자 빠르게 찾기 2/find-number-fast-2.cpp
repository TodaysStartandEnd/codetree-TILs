#include <iostream>
#include <set>
using namespace std;

int main() 
{
    set <int> set;
    int n, m;
    cin >> n >> m;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        set.insert(x);
    }
    for(int i=0; i<m; i++)
    {
        int x;
        cin >> x;
        if(set.lower_bound(x) != set.end())
        {
            cout << *set.lower_bound(x) <<'\n';
        }
        else
        {
            cout << "-1" << '\n';
        }
    }
    return 0;
}