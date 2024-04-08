#include <iostream>
#include <unordered_set>
using namespace std;

int main() 
{
    unordered_set <int> set;
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        set.insert(x);
    }
    int m;
    cin >> m;
    for(int i=0; i<m; i++)
    {
        int x; 
        cin >> x;
        if(set.find(x)== set.end())
        {
            cout << 0 << " ";
        }
        else
        {
            cout << 1 << " ";
        }
    }
    return 0;
}