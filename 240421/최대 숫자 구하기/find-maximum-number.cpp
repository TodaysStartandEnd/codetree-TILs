#include <iostream>
#include <set>
using namespace std;

int main() 
{
    int n,m;
    cin >> n >> m ;
    set <int> set;
    for(int i=1; i<=m; i++)
    {
        set.insert(i);
    }
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        set.erase(x);
        cout << *set.rbegin()<<'\n';
    }

    return 0;
}