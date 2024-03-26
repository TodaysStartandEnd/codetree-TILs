#include <iostream>
#include <algorithm>
using namespace std;

int dp[1001];


int main() {
    int a[3]= {1,2,5};
    int n;
    cin >> n;
    dp[1] = 1;
    dp[2] = 1;
    dp[5] = 1;
   
    for(int j=1; j<=n; j++)
    {
        for(int i=0; i<3; i++)
        {
            if(j-a[i]>0 || j-a[i]<=n)
            {
                 if(dp[j-a[i]]>0)
                {
                dp[j]+=dp[j-a[i]];
                dp[j]%= 10007;
                }
            }
           
        }
    }
    cout << dp[n];
    return 0;
}