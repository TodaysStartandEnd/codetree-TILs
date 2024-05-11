#include <iostream>
using namespace std;

int main() 
{
    int n;
    int count[100001];
    int a[100001];
    int size = 0;
    int max =0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(int i=0; i<n; i++)
    {
        count[a[i]]++;
        if(count[a[i]]>1)
        {
            count[i]--;
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