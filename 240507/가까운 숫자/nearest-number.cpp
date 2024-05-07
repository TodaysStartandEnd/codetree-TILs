#include <iostream>
#include <set>
using namespace std;

int main() 
{
    set<int> s;
    set<int> d;
    int n;
    cin >> n;
    s.insert(0);
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
        int min =1000000000;
        for(auto j= s.begin() ;j!=s.end();j++)
        {
            if(j==--s.end())
            {
                break;
            }
            if(min >*s.upper_bound(*j) - *j)
            {
                min = *s.upper_bound(*j) - *j;
            }
        }
        cout << min <<'\n';
    }

    
    
    return 0;
}