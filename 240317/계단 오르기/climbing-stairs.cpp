#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n ;
    // 2층 : 1
    // 3층 : 1
    // 4층 : 1 (2,2)
    // 5층 : 2 (3,2/2,3)
    // 6층 : 2 (3,3/2,2,2)
    // 7층 : 3 (3,2,2/2,3,2/2,2,3)
    // 8층 : 4 (3,3,2/3,2,3/2,3,3/2,2,2,2)

    int a[1001];
    a[2] = 1;
    a[3] = 1;
    for(int i=4; i<=n; i++)
    {
        a[i] = (a[i-2]+a[i-3])%10007;
    }
    cout << a[n];
    return 0;
}