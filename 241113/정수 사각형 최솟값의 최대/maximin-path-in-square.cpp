#include <iostream>
#include <algorithm>
using namespace std;

int a[101][101];
int s[101][101];

int main() 
{
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            s[i][j] = min(max(a[i-1][j], a[i][j-1]),a[i][j]);
        }
    }
    cout << s[n-1][n-1] <<'\n';

    return 0;
}