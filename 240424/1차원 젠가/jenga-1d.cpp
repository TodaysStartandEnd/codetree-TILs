#include <iostream>
using namespace std;

int main() 
{
    int a[101]={0,};
    int n;
    cin >> n;
    int start =0;
    int end = n;
    for(int i=n;i>=1;i--)
    {
        cin >> a[i];
    }
    for(int i=0; i<2; i++)
    {
        int x,y;
        cin >> x >> y;
        if(y != end)
        {
            for(int j=y+1; j<=end;j++)
            {
                a[j] = a[j-(y-x+1)];
            }
            end-=(y-x+1);
        }
        else
        {
            start += (y-x+1);
        }
        
    }
    cout << end-start << "\n";
    for(int i=end; i>start;i--)
    {
        cout << a[i] <<'\n';
    }

    return 0;
}