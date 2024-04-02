#include <iostream>
#include <map>
using namespace std;

int main() {
    map <int, int> mp;
    int n;
    cin >> n;
    while(n--)
    {
        string s;
        cin >> s;
        if(s == "add")
        {
            int k, v;
            cin >> k >> v;
            if(mp.find(k) != mp.end())
            {
                mp.erase(k);
            }
            mp.insert({k,v});
            
        }
        else if(s == "remove")
        {
            int k;
            cin >> k;
            mp.erase(k);
        }
        else if(s == "find")
        {
            int k;
            cin >> k;
            if(mp.find(k)!= mp.end())
            {
                cout << mp[k] << '\n';
            }
            else
            {
                cout << "None" << '\n';
            }
        }
        else if(s == "print_list")
        {
            if(!mp.empty())
            {
                 for(auto i=mp.begin(); i!=mp.end(); i++)
                {
                    cout << (*i).second << " ";
                }
                cout << '\n';
            }
            else
            {  
                cout << "None" << '\n';
        
            }
           
        }
    }
    return 0;
}