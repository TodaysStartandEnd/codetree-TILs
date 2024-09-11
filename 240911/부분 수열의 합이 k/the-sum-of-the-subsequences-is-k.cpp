#include <iostream>
using namespace std;

int a[1001];
int sum[1001];

int main() 
{
    int n , k;
    cin >> n >> k;
    for(int i=1; i<=n ; i++)
    {
        cin >> a[i];
    }

    for(int i=1; i<=n ; i++)
    {
        sum[i] = sum[i-1] + a[i];
    }

    int count = 0;
    for(int i=1;i<=n;i++)
    {
        if(sum[i] == k)
        {
            count ++;
        }
        else if(sum[i] > k)
        {
            int j = 0;
            while(j <i)
            {
                if(sum[i]-sum[j] == k)
                {
                    count++;
                    break;
                }
                j++;
            }
        }
        else
        {
            continue;
        }
    }
    cout << count;
    
    return 0;
}