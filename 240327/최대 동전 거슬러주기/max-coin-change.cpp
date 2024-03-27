#include <iostream>
#include <algorithm>
using namespace std;
int a[101];
int dp[10001];

int main() {
    int n, m;
    cin >> n >> m;
     for(int i=0; i<=m;i++)
    {
        dp[i] = -1;
    }
    for(int i=0; i<n;i++)
    {
        cin >> a[i];
        dp[a[i]] = 1;
    }
    for(int i=1; i<=m; i++)
    {
        for(int j=0; j<n;j++)
        {
            if(i-a[j]>=1 && i-a[j] <= m)
            {
                dp[i] = max(dp[i-a[j]]+1, dp[i]);
            }
        }
    }
    cout << dp[m];
    return 0;
}