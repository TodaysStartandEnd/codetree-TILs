#include <iostream>
#include <set>
using namespace std;

int main() 
{
    set <int> set;
    int n,k;
    cin >> n >> k;
    while(n--)
    {
        int x;
        cin >> x;
        set.insert(-x);
    }
    int count = 0;
    int before;
    while(count < k)
    {
        if(count == 0)
        {
            cout << -*set.begin() <<' ';
            before= *set.begin();
        }
        else
        {
            cout << -*set.upper_bound(before) <<' ';
            before = *set.upper_bound(before);
        }
         
        count++;

    }

    return 0;
}