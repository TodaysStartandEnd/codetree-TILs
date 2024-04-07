#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() 
{
    int n,m; 
    map<string ,int> map1; 
    map<int,string> map2;
    cin >> n >> m;
    for(int i=1; i<=n ;i++)
    {
        string s;
        cin >> s;
        map1.insert({s,i});
        map2.insert({i,s});
    }
    for(int i=0; i<m; i++)
    {
        string s;
        cin >> s;
        if(map1.find(s) != map1.end())
        {
            cout << map1.find(s)->second << '\n';
        }
        else
        {
            int k = stoi(s);
            cout << map2.find(k)->second << '\n';
        }
    }
    return 0;
}