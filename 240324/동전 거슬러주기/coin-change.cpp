#include <iostream>
using namespace std;

int a[101];
long dp[10001];

int main() {

    int n, m;
    cin >> n >> m;
    for(int i=0; i<=m; i++)
    {
        dp[i] = -1;
    }
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        dp[a[i]] = 1;
    }
    for(int i=1; i<=m; i++)
    {
        for(int j=0; j<n;j++)
        {
            if(i<a[j])
            {
                continue;
            }
            if(dp[i- a[j]]>0)
            {
                if(dp[i] == -1)
                {
                    dp[i] = dp[i-a[j]]+1;
                }
                else
                {
                    dp[i] = min(dp[i-a[j]]+1,dp[i]);
                }
            }
        }
    }
 
    cout << dp[m];
    return 0;
}