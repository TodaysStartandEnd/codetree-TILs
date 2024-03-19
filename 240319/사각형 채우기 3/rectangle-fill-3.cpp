#include <iostream>
using namespace std;

int a[1001];

int main() {
    int n;
    cin >> n ;
    a[1] = 2;
    a[2] = 7;
    for(int i=3; i<=n;i++)
    {
        a[i]= (((3*a[i-1])%1000000007)+1)%1000000007;
    }
    cout << a[n];
    return 0;
}