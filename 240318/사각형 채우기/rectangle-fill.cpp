#include <iostream>
using namespace std;

int a[1000];

int main() 
{
    int n ;
    cin >> n;
    // 홀수 : (앞 블록 + 1x2)a[i-1] + a[1]
    // 짝수 : (앞에 홀수 블록일 때)a[i-1] + a[1] +(겹치는 거 빼고 앞에 짝수 블록일 때) a[2]
    a[1] = 1;
    a[2] = 2;
    for(int i=3; i<=n ; i++)
    {
        if(i%2==0)
        {
            a[i]= (a[i-1]+a[1]+a[2])%10007;
        }
        else
        {
            a[i] = (a[i-1]+a[1])%10007;
        }
    }
    cout << a[n];

    return 0;
}