#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int n;
    long sum_max = -1000000000000;
    cin >> n;
    long a[100001];
    long sum[100001];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        if(i==0)
        {
            sum[0] = 0;
        }
    }
    
    for(int i=1;i<n;i++)
    {
        sum[i] = max((sum [i-1]+a[i]),a[i]);
        if(sum[i] > sum_max)
        {
            sum_max = sum[i];
        }
    } 
    cout << sum_max;

    return 0;
}