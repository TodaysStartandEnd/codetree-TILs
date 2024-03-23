#include <iostream>
using namespace std;

// a[] : 수열 값 
int a[1001];
//dp[] : 증가 수열 길이
//문제: 증가 수열로 하면 i번째에서 
int dp[1001];

int main() {
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }  
    for(int i=0; i<n;i++)
    {
        dp[i]=1;
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i; j++)
        {
            if(a[i]>a[j])
            {
                dp[i] = max(dp[j]+1,dp[i]);
            }
        }
    }
    int max=0;

    for(int i=0;i<n;i++)
    {
        if(max < dp[i])
        {
            max = dp[i];
        }
    }
    cout << max;
    return 0;

}