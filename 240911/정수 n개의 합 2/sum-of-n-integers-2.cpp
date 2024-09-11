#include <iostream>
#include <algorithm>
using namespace std;

int sum[100001];
int maximum = -1000;

int main() 
{
    int n, k;
    cin >> n >> k;

    for(int i = 1; i<=n; i++)
    {
        int a;
        cin >> a;
        if(i == 1)
        {
            sum[i] = a;
        }
        else
        {
            sum[i] = sum[i-1] + a;
        }
        
    }
    for(int i=2; i<=n; i++)
    {
        maximum = max(sum[i]- sum[i-2], maximum);
    }
    cout << maximum;
    return 0;
}