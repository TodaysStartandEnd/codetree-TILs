#include <iostream>
using namespace std;

int a[1000];

int main() 
{
    int n ;
    cin >> n;
   //a[1] = 1
   //a[2] = 2
   //a[3] = 3
   //a[4] = 5
   //a[5] = 8
    a[1] = 1;
    a[2] = 2;
    for(int i=3; i<=n ; i++)
    {
      a[i] = (a[i-1]+a[i-2])%10007;
    }
    cout << a[n];

    return 0;
}