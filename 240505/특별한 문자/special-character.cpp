#include <iostream>
#include <unordered_map>
using namespace std;
int main() 
{
    unordered_map<char,int> map;
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++)
    {
        if(map.find(s[i])!=map.end())
        {
            map[s[i]]++;
        }
        else
        {
            map[s[i]] = 1;
        }

    }
    bool flag = 0;
    for(int i=0; i<s.size();i++)
    {
        if((map.find(s[i]))->second == 1)
        {
            cout << (map.find(s[i]))->first ;
            flag = 1;
            break;
        }

    }
    if(flag == 0)
    {
        cout << "None";
    }
    return 0;
}