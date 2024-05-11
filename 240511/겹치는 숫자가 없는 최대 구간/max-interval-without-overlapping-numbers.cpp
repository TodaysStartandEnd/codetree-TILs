#include <iostream>
using namespace std;

int main() 
{
    int n;
    int count[100001];
    int a[100001];
    int b[100001];
    int size = 0;
    int max =0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(int i=0; i<n; i++)
    {
        if(max <size)
        {
            max = size;
        }
        count[a[i]]++;
        if(count[a[i]] == 1)
        {
            b[a[i]] =i;
        }
        if(count[a[i]]>1)
        {
            count[i]--;
            size -=b[a[i]];
            b[a[i]] = i;
        }
        else
        {
            size++;
        }
        
    }
    cout << max;
    

    return 0;
}