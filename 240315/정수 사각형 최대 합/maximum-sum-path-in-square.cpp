#include <iostream>
#include <algorithm>
using namespace std;

int a[101][101];

int main() {
    int n;
    cin >> n;
    for(int i=0; i<n;i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i=1; i<n; i++)
    {
        a[i][0]+= a[i-1][0];
    }
    for(int j=1; j<n; j++)
    {
        a[0][j]+=a[0][j-1];
    }
    for(int i=1; i<n; i++)
    {
        for(int j=1; j<n; j++)
        {
            a[i][j] = max(a[i-1][j]+a[i][j], a[i][j-1]+a[i][j]);
        }
    }
    cout << a[n-1][n-1];
    return 0;
}