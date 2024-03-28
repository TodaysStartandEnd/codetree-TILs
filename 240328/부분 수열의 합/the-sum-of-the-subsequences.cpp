#include <iostream>
#include <algorithm>
using namespace std;

int a[101];
bool dp[10001];

int main() {
    int n,m;
    cin >> n >> m;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    dp[0] =1;
    for(int j=0; j<n; j++)
    {
        for(int i=m; i>=0; i--)
        {
            if(i-a[j]>=0)
            {
                if(dp[i-a[j]] == 1)
                {
                    dp[i] = 1;
                }   
            }
           
        }
       
    }
    if(dp[m] == 1)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}