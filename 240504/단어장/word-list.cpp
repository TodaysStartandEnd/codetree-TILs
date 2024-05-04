#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() 
{
    map <string,int> map;
    int n;
    cin >> n;
    while(n--)
    {
        string s;
        cin >> s;
        if(map.find(s)!=map.end())
        {
            map[s]++;
        }
        else
        {
            map[s]= 1;
        }
    }
    for(auto i= map.begin(); i!=map.end(); i++)
    {
        cout << (*i).first <<" " <<(*i).second <<'\n'; 
    }
    return 0;
}