#include <iostream>
#include <map>
#include <iomanip>
using namespace std;

int main() 
{
    double sum = 0;
    map<string, int> map;
    int n;
    cin >> n;
    while(n--)
    {
        string s;
        cin >> s;
        if(map.find(s) == map.end())
        {
            map.insert({s,1});
        }
        else
        {
            map[s]++;
        }
        sum ++;
    }
    for(auto i=map.begin(); i!=map.end(); i++)
    {
        cout << (*i).first << setprecision(4)<< " "<<fixed<<((*i).second)/sum *100<< '\n';
    }

    return 0;
}