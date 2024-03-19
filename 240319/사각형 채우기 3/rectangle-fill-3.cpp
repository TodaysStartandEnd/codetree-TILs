#include <iostream>
using namespace std;

//1 : 2
//2 : 7
//3 : a[2]*a[1](1x2 넣기(세로)) + a[1]*3(2x2 가로 넣기) + 2


int a[1001];

int main() {
    int n;
    cin >> n ;
    a[1] = 2;
    a[2] = 7;
    for(int i=3; i<=n;i++)
    {
        a[i]= (a[i-1]*a[1]+a[i-2]*3+2)%1000000007;
    }
    cout << a[n];
    return 0;
}