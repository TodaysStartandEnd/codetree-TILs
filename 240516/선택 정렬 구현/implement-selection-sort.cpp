#include <iostream>
using namespace std;

int main() 
{
    int n;
    int a[101];
    cin >> n;
    for(int i=0;i<n; i++)
    {
        cin >> a[i];
    }
    for(int i=0; i<n-1; i++)
    {
        int min = i;
        for(int j=i+1; j<n; j++)
        {
            if(a[min]>a[j])
            {
                min = j;
            } 
        }
        int tmp = a[min];
        a[min] = a[i];
        a[i] = tmp;
    }
    for(int i=0;i<n; i++)
    {
        cout << a[i] << ' ';
    }
    return 0;
}