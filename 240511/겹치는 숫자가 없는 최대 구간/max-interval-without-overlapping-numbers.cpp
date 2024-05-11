#include <iostream>
#include <algorithm>
using namespace std;

    int n;
    int c[100001];
    int a[100001];
    int nxt = 0;
    int s = 0;

int main() 
{
    
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(int i=0; i<n; i++)
    {
        if(c[a[i]] != 0)
        {
            nxt = max(nxt, c[a[i]]);
        }
        c[a[i]] = i+1;
        s = max(s, i-nxt+1);
        
    }
    
    cout << s;
    

    return 0;
}