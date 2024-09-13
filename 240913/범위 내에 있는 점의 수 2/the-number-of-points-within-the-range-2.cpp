#include <iostream>
#include <algorithm>
using namespace std;

int a[1000001];
long sum[2000002];
int main() 
{
    int n, q;
    cin >> n >> q;
    for(int i=0; i<n; i++)
    {
        int p;
        cin >> p;
        a[i] = 2*p;
        
    }
    sort(a,a+n);
    int j=0;
    int plus =1;
    for(int i=0; i<=2000003; i++)
    {
        if(a[j] == i)
        {
            plus++;
            j++;
        }
        sum[i]+= plus+1;

    }
    for(int i=0; i<q; i++)
    {
        int a,b;
        cin >> a >> b;
        cout <<sum[2*b+1]-sum[2*a-1]<<'\n'; 
    }
    return 0;
}