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
        if(count[a[i]] == 0)
        {
            b[a[i]] =i;
        }
        count[a[i]]++;
        if(count[a[i]]>1)
        {
            if(max <i-b[a[i]])
            {
                max = i - b[a[i]];
            }
            b[a[i]] = i;
        }
        else
        {
            size++;
        }
        if(max <size)
        {
            max = size;
        }
        
    }
    cout << max;
    

    return 0;
}