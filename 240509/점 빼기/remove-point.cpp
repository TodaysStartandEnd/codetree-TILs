#include <iostream>
#include <set>
#include <utility>

using namespace std;

int main() 
{
    set <pair<int,int>> set;
    int n, m;
    cin >> n >> m;
    for(int i=0; i<n; i++)
    {
        int x, y;
        cin >> x >> y;
        set.insert({x,y});
    }
    for(int i=0; i<m; i++)
    {
        int x; 
        cin >> x;
        if(set.lower_bound({x,0})!=set.end())
        {
            cout << set.lower_bound({x,0})->first << " " <<set.lower_bound({x,0})->second;
            set.erase({set.lower_bound({x,0})->first,set.lower_bound({x,0})->second});
        }
        else
        {
            cout << -1 << " " << -1 ;
        }
        cout <<'\n';
    }
    return 0;
}