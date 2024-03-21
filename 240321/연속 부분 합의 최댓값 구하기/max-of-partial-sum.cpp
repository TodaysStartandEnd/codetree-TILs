#include <iostream>
#include <algorithm>
using namespace std;

int a[100001];
int sum[100001];
long mx=-100000001;

int main() {
    int n;
    cin >>n;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    sum[0] = a[0];
    for(int i=1; i<n; i++)
    {
        sum[i] = max((sum[i-1]+a[i]),a[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(mx < sum[i])
        {
            mx = sum[i];
        }
    }
    cout << mx;
    return 0;
}