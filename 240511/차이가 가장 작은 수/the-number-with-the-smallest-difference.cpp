#include <iostream>
#include <set>
#include <cmath>
using namespace std;

int main() 
{
    int n, m;
    cin >> n >> m;
    int a[100001];
    set <int> diff;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        for(int j=0;j<i; j++)
        {
            if(abs(a[i]-a[j])>=m)
                diff.insert(abs(a[i]-a[j]));
        }
    }

    if(diff.lower_bound(m)!=diff.end())
    {
        cout << *diff.lower_bound(m) ;
    }
    else
    {
        cout <<-1;
    }
    return 0;
}