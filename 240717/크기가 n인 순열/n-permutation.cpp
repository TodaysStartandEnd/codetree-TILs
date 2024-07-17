#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    vector<int> v;
    int n;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        v.push_back(i);
    }
    do
    {
        for(auto it = v.begin(); it!= v.end();it++)
        {
            cout << *it << ' ';
        }
        cout << '\n';
    }while(next_permutation(v.begin(),v.end()));
    return 0;
}