#include <iostream>
#include <set>
using namespace std;

int main() 
{
    int n, m;
    set <int> a;
    cin >> n ;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        a.insert(x);
    }
    cin >> m;
    for(int i=0; i<m; i++)
    {
        int x;
        cin >> x;
        if(a.find(x)!=a.end())
        {
            cout << 1 << '\n';
        }
        else
        {
            cout << 0 << '\n';
        }
    }
    return 0;
}