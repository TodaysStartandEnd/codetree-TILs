#include <iostream>
#include <set>
#include <utility>
using namespace std;

int main() 
{
    set <pair<int,int>> set;
    int n, m ;
    cin >> n >> m ;
    for(int i=0; i<n; i++)
    {
        int  x, y ;
        cin >> x >> y;
        set.insert({x,y});
    }
    for(int i=0; i<m; i++)
    {
        int x, y;
        cin >> x >> y;
        if(set.lower_bound({x,y})!= set.end())
        {
            cout << set.lower_bound({x,y})->first << " "<< set.lower_bound({x,y})->second << '\n';
        }
        else
        {
            cout << "-1 -1" <<'\n';
        }
    }
    return 0;
}