#include <iostream>
using namespace std;

bool a[1000001];
long sum[2000002];
int main() 
{
    int n, q;
    cin >> n >> q;
    for(int i=0; i<n; i++)
    {
        int p;
        cin >> p;
        for(int i=2*p; i<=2000002; i++)
        {
            sum[i]++;
        }
    }
    for(int i=0; i<q; i++)
    {
        int a,b;
        cin >> a >> b;
        cout <<sum[2*b+1]-sum[2*a-1]<<'\n'; 
    }
    return 0;
}