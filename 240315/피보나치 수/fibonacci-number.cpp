#include <iostream>
using namespace std;


int main() {
    int fibo[46];
    int n;
    cin >> n;
    fibo[1]= 1;
    fibo[2]= 1;
    for(int i=3; i<=n; i++)
    {
        fibo[i] = fibo[i-1]+fibo[i-2];
    }
    cout << fibo[n];
    return 0;
}