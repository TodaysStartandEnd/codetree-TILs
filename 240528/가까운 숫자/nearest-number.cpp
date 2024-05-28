#include <iostream>
#include <set>
using namespace std;

int main() 
{
    set<int> ps;
    set<int> ms;
    int n;
    int min= 100000;
    cin >> n;

    ps.insert(0);
    ms.insert(0);

    while(n--)
    {
        int x;
        cin >> x;
        ps.insert(x);
        ms.insert(-x);
        if(ps.upper_bound(x)!=ps.end())
        {
            if(min > *ps.upper_bound(x)-x)
            {
                min = *ps.upper_bound(x)-x;
            }
        }
        if(ms.upper_bound(-x)!= ms.end())
        {
            if(min > *ms.upper_bound(-x)-(-x))
            {
                min = *ms.upper_bound(-x)-(-x);
            }
        }

        
        cout << min <<'\n';
    }
    return 0;
}