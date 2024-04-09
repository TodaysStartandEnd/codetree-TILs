#include <iostream>
using namespace std;

long arr[100001];

int main() 
{
    int n, m ;
    cin >> n >> m;
    for(int i=1; i<=n; i++)
    {
        cin >> arr[i];
    }
    for(int i=0; i<m; i++)
    {
        int x;
        cin >> x;
        int left = 1;
        int right = n;
        int idx = -1;
        while(left <= right)
        {
            int mid = (left+right)/2;
            if(arr[mid] == x)
            {
                idx = mid;
                break;
            }
            else if(arr[mid] > x)
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        cout << idx <<'\n';
    }
    return 0;
}