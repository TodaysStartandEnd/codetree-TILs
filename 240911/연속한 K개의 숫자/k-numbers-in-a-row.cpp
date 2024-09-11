#include <iostream>
#include <algorithm>
using namespace std;

int n,k,b;
int a[100001];
int sum[100001];
int minimum =1000000000;

int main() 
{
    cin >> n >> k >>b;
    for(int i=1; i<=n; i++)
    {
        a[i] = 1;
    }
    for(int i=0; i<b; i++)
    {
        int num;
        cin >> num;
        a[num] = 0;
    }
    for(int i=1; i<=n; i++)
    {
        sum[i] = sum[i-1] + a[i];
    }
    for(int i= k; i<=n; i++)
    {
        minimum = min(minimum,k-(sum[i]- sum[i-k]));
    }
    cout << minimum;

    return 0;
}