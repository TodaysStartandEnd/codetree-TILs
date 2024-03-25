#include <iostream>
#include <algorithm>
using namespace std;

int a[1001];
int dp[1001];

int main() {
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        dp[i] = 1;
        cin >> a[i];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i ; j++)
        {
            if(a[i] <a[j])
            {
                dp[i] = max(dp[j]+1,dp[i]);
            }
        }
    }
    int max=0;
    for(int i=0; i<n; i++)
    {
        if(max < dp[i])
        {
            max =dp[i];
        }

    }
    cout <<max;
    return 0;
}