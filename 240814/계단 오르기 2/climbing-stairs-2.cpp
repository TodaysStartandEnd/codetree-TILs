#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    long cnt[1001];
    long maxcnt = 0;

    for(int i=0; i<n; i++)
    {
        cin >> cnt[i];
    }
    
    long dp[1000][4]={0,};
    dp[0][0] = cnt[0];
    dp[1][0] = cnt[1];
    dp[1][1] = dp[0][0] + dp[1][0];

    for(int i=2; i<n ; i++)
    {
        for(int j=0; j<3; j++)
        {
            dp[i][j] = max(dp[i][j], dp[i-1][j-1]+cnt[i]);
            dp[i][j] = max (dp[i][j], dp[i-2][j] + cnt[i]);
            maxcnt = max(maxcnt, dp[i][j]);
        }
        
    }

    cout << maxcnt;


    return 0;
}