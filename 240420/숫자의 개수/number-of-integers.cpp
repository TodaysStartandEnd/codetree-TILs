#include <iostream>
#include <map>
using namespace std;
int main() 
{
    map <int,int> map;
    int n, m;
    cin >> n >> m;
    for(int i=0; i<n;i++)
    {
        int x;
        cin >> x;
        if(map.find(x)!=map.end())
        {
            map[x]++;
        }
        else
        {
            map[x] = 1;
        }
    }
    for(int i=0;i<m;i++)
    {
        int x;
        cin >> x;
        cout << map[x] << '\n';
    }
    

    return 0;
}