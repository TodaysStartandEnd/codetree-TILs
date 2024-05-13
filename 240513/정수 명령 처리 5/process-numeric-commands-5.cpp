#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector<int> v;

    while(n--)
    {
        string s;
        cin >> s;
        if(s == "push_back")
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        else if(s == "get")
        {
            int x;
            cin >> x;
            cout << v[x-1] <<'\n';

        }
        else if(s == "size")
        {
            cout << v.size() <<'\n';
        }
        else if(s == "pop_back")
        {
            v.pop_back();
        }
        else
        {
            cout << "없음"<<'\n';
        }
    }

    return 0;
}