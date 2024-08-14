#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int n;
    int a[1001]={0,};
    int count[1001]={0,};
    int mx = 0;
    cin >> n;
    for(int i=0;i<n;i++)
    {
       cin >> a[i];
    }
    for(int i=0;i<n;i++)
    {
        
        if(count[i]!=0 || i==0)
        {
           for(int j=i+1; j<=i+a[i];j++)
	        {
	            if(j>=n)
	            {
	                break;
	            }
	            count[j] = max(count[i]+1,count[j]); 
	        }
            
        }
        
    }
   
    cout <<count[n-1];
    return 0;
}