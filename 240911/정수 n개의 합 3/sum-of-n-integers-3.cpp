#include <iostream>
#include <algorithm>
using namespace std;

int a[501][501];
int sum[501][501];
int maximum = 0;


int main() 
{
    int n, k;
    cin >> n >> k;
    for(int i=1; i<=n;i++)
    {
        for(int j=1; j<=n;j++)
        {
            cin >> a[i][j];
        }
    }
    sum[1][1] = a[1][1];
    for(int i=2; i<=n; i++)
    {
        sum[0][i]= sum[0][i-1]+a[0][i];
    }
    for(int i=2; i<=n; i++)
    {
        sum[i][0]= sum[i-1][0]+a[i][0];
    }
    for(int i = 1 ; i<= n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            sum[i][j] = sum[i-1][j]+ sum[i][j-1]- sum[i-1][j-1]+ a[i][j];
        }
    }

    for(int i = k ; i<= n; i++)
    {
        for(int j = k ; j<=n; j++)
        {
            maximum= max(sum[i][j] - sum[i-k][j]- sum[i][j-k]+ sum[i-k][j-k], maximum);
        }
    }
    cout << maximum;


    return 0;
}