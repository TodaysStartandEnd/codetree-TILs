#include <iostream>
#include <unordered_set>
using namespace std;

int main() 
{
    unordered_set<int> uset;
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
            if(uset.find(x)==uset.end())
            {
                uset.insert(x);
            }

        }
        else if(s == "remove")
        {
            int x;
            cin >> x;
            uset.erase(x);

        }
        else if(s == "find")
        {
            int x;
            cin >> x;
            if(uset.find(x)!=uset.end())
            {
                cout << "true" << '\n';
            }
            else
            {
                cout << "false" << '\n';
            }
        }
    }
    return 0;
}