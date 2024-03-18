#include <iostream>
using namespace std;

int a[1000];

int main() 
{
    int n ;
    cin >> n;
    // 홀수 : 앞의 짝수 + a[1]
    // 짝수 : 앞의 짝수 * a[2]
    a[1] = 1;
    a[2] = 2;
    for(int i=3; i<=n ; i++)
    {
        if(i%2==0)
        {
            a[i]= a[i-2] * a[2];
        }
        else
        {
            a[i] = a[i-1]+a[1];
        }
    }
    cout << a[n];

    return 0;
}