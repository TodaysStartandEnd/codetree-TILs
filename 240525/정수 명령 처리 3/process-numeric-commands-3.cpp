#include <iostream>
#include <deque>
using namespace std;

int main() 
{
    int n ;
    deque <int> d;
    cin >> n;

    while(n--)
    {
        string s;
        cin >> s;
        if(s == "push_front")
        {
            int x;
            cin >> x;
            d.push_front(x);
        }
        else if(s == "push_back")
        {
            int x;
            cin >> x;
            d.push_back(x);
        }
        else if(s == "pop_front")
        {
            cout << d.front() <<'\n';
            d.pop_front();
        }
        else if(s == "pop_back")
        {
            cout << d.back() <<'\n';
            d.pop_back();
        }
        else if(s == "size")
        {
            cout << d.size() << '\n';
        }
        else if( s == "empty")
        {
            cout << (d.empty() ? 1 : 0) <<"\n";
        }
        else if("front")
        {
            cout << d.front() <<'\n';
        }
        else if("back")
        {
            cout << d.back() <<'\n';
        }
    }
    return 0;
}