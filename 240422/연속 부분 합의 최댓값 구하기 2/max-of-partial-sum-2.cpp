#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int n;
    int max = -1000000000000;
    cin >> n;
    int a[100001];
    int sum[100001];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        if(i==0)
        {
            sum[0] = 0;
        }
    }
    
    for(int i=0;i<n;i++)
    {
        sum[i] = max(sum [i-1]+a[i],a[i]);
        if(sum[i] > max)
        {
            max = sum[i];
        }
    } 
    cout << max;

    return 0;
}