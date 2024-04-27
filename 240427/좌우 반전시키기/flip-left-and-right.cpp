#include <iostream>
using namespace std;

int main() 
{
    bool a[101];
    int n;
    int count =0;
    cin >> n;
    for(int i=0; i<n;i ++)
    {
        cin >> a[i];
    }
    if(n==1)
    {
        if(a[0] == 0)
        {
            count = -1;
        }
        else
        {
            count = 0;
        }
    }
    else
    {
        for(int i=1; i<n-1;i++)
        {
            if(a[i-1]==0)
            {   
                count++;
                a[i-1] = 1;
                a[i] = !a[i];
                a[i+1] = !a[i+1];
            }
        }
        if(a[n-2]==0)
        {
        count++;
        a[n-2]= 1;
        a[n-1]= !a[n-1];
        }
        for(int i=0; i<n;i++)
        {
            if(a[i]!=1)
            {
                count = -1;
                break;
            }
        }

    }
    
    cout << count;
    
    return 0;
}