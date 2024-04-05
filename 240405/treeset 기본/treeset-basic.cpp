#include <iostream>
#include <set>
using namespace std;


int main() {
    set<int> set;
    int n;
    cin >> n;
    while(n--)
    {
        string s;
        cin >> s;
        if(s == "add")
        {
            int x;
            cin >> x;
            if(set.find(x) == set.end())
            {
                set.insert(x);
            }
        }
        else if (s == "remove")
        {
            int x;
            cin >> x;
            set.erase(x);
        }
        else if(s=="find")
        {
            int x;
            cin >> x;
            if(set.find(x) != set.end())
            {
                cout << "true" << '\n';
            }
            else
            {
                cout << "false" << '\n';
            }
        }
        else if(s == "lower_bound")
        {
            int x; 
            cin >> x;
            if(set.lower_bound(x) != set.end())
            {
                cout << *set.lower_bound(x) << '\n';
            }
            else
            {
                cout << "None" << '\n';
            }
        }
        else if(s == "upper_bound")
        {
            int x;
            cin >> x;
            if(set.upper_bound(x) != set.end())
            {
                cout << *set.upper_bound(x) << '\n';
            }
            else
            {
                cout << "None" << '\n';
            }
        }
        else if(s=="largest")
        {
            if(!set.empty())
            {
                cout << *set.rbegin() << '\n';
            }
            else
            {
                cout << "None" << '\n';
            }
        }
        else if(s=="smallest")
        {
            if(!set.empty())
            {
                cout << *set.begin() << '\n';
            }
            else
            {
                cout << "None" << '\n';
            }
        }
    }

    return 0;
}