#include <iostream>
using namespace std;

int main() 
{
    int a[101] = {0};
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) 
    {
        cin >> a[i];
    }

    int s1, e1;
    cin >> s1 >> e1;
    for(int i = e1 + 1; i <= n; i++) 
    {
        a[i - (e1 - s1 + 1)] = a[i];
    }
    n -= (e1 - s1 + 1);

    int s2, e2;
    cin >> s2 >> e2;
    for(int i = e2 + 1; i <= n; i++) 
    {
        a[i - (e2 - s2 + 1)] = a[i];
    }
    n -= (e2 - s2 + 1);

    cout << n << '\n';
    for(int i = 1; i <= n; i++) 
    {
        cout << a[i] << '\n';
    }

    return 0;
}