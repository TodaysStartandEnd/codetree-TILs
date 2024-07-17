#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int a[11][11];
bool row[11];
bool high[11];
long max_sum = 0;
int n;


void Choose(long now, int cnt)
{
    if(cnt == n)
    {
        max_sum = max(max_sum, now);
        return;
    }
    for(int i=0; i<n ; i++)
    {
        for(int j=0; j<n; j++)
        {
            if((row[i] !=1) && (high[j] !=1))
            {
                row[i] = 1;
                high[j] = 1;
                Choose(now+a[i][j], cnt+1);
                row[i] = 0;
                high[j] = 0;
            }

        }
    }
}

int main() 
{
    cin >> n; 
    for(int i=0; i<n ; i++)
    {
        for(int j=0; j<n ; j++)
        {
            cin >> a[i][j];
        }
    }
    Choose(0,0);
    cout << max_sum <<'\n';
    
    return 0;
}