#include <iostream>
#include <algorithm>
using namespace std;

int a[101][101];
int main() {
    int n;
    cin >> n; 
    for(int i=0;i<n;i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i=n-2;i>=0;i--)
    {
        a[i][0]+=a[i+1][0];
    }
    for(int j=1;j<n;j++)
    {
        a[n-1][j]+=a[n-1][j-1];
    }
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<n;j++)
        {
            a[i][j]=min(a[i+1][j]+a[i][j],a[i][j-1]+a[i][j]);
        }
    }
    cout << a[0][n-1];
    return 0;
}