#include <iostream>
#include <map>
#include <utility>
using namespace std;
int main() 
{
    map <int,int> map;
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        if(map.find(x)==map.end())
        {
            map.insert({x,i+1});
        }
    } 
    for(auto i=map.begin(); i!=map.end();i++)
    {
        cout << i->first << " "<< i->second <<'\n';
    }
    
    return 0;
}