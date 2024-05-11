#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int n;
    int count[100001];
    int a[100001];
    int next = 0;
    int size = 0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(int i=0; i<n; i++)
    {
        if(count[a[i]] != 0)
        {
            next = max(size, count[a[i]]);
        }
        count[a[i]] = i+1;
        size = max(size, i-next+1);
        
    }
    
    cout << size;
    

    return 0;
}