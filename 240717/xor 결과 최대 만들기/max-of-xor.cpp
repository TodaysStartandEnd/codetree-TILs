#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long nums[21];
int n, m;
long max_xor = 0;

void Choose(long now, int cnt, int start)
{
    if(cnt == m)
    {
       max_xor = max(max_xor, now);
       return;
    }
    for(int i=start; i<n; i++)
    {
        Choose(now^nums[i], cnt+1, i+1);
    }
    
}

int main() 
{
    cin >> n >> m ;
    for(int i=0; i<n; i++)
    {
        cin >> nums[i];
    }
    Choose(0,0,0);
    cout <<max_xor <<'\n';
    return 0;
}