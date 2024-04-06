#include <iostream>
using namespace std;

int a[100001];
long sum[100002];
int main() 
{
    int n ,k;
    int max = -10000000;
    cin >> n >> k;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        a[i] = x;
        if(i!=0)
        {
            sum[i] = sum[i-1]+a[i-1];
        }
    }
    sum[n] = sum[n-1]+a[n-1];
    for(int i=n; i-k-1>=0; i--)
    {
        if(max < sum[i] -sum[i-k])
        {
            max = sum[i] -sum[i-k];
        }     

    } 
    cout << max ;

    return 0;
}