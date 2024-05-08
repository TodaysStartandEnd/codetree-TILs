#include <iostream>
#include <set>
using namespace std;

int main() 
{
    set <int> set;
    int n, m;
    int count =0;
    cin >> n >> m;
    for(int i=1; i<=m; i++)
    {
        set.insert(-i);
    }
    for(int i=0; i<n; i++)
    {
        int x; 
        cin >> x;
        if(set.lower_bound(-x)!=set.end())
        {
            set.erase(*set.lower_bound(-x));
            count ++;
        }
        else
        {
            break;
        }
    }
    cout << count;
    return 0;
}