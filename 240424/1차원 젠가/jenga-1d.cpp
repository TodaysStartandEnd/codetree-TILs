#include <iostream>
using namespace std;

int main() 
{
    int a[101]={0,};
    int n;
    cin >> n;
    int size = n;
    for(int i=n-1;i>=0;i--)
    {
        cin >> a[i];
    }
    for(int i=0; i<2; i++)
    {
        int x,y;
        cin >> x >> y;
        for(int j=y+1; j<size;j++)
        {
            a[j] = a[j-(y-x+1)];
        }
        size-=(y-x+1);
    }
    cout << size << "\n";
    for(int i=size-1; i>=0;i--)
    {
        cout << a[i] <<'\n';
    }

    return 0;
}