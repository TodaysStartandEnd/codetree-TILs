#include <iostream>
#include <list>
using namespace std;

int main() 
{
    int n;
    list <int> list;
    cin >> n;
    while(n--)
    {
        string s;
        cin >> s;
        if(s == "push_front")
        {
            int x;
            cin >> x;
            list.push_front(x);
        }
        else if(s == "push_back")
        {
            int x;
            cin >> x;
            list.push_back(x);
        }
        else if(s == "pop_front")
        {
            cout << list.front()<<'\n';
            list.pop_front();
        }
        else if(s == "pop_back")
        {
            cout << list.back()<<'\n';
            list.pop_back();
        }
        else if(s == "size")
        {
            cout << list.size()<<'\n';
        }
        else if(s == "empty")
        {
            if(list.empty())
            {
                cout << "1" <<"\n";
            }
            else
            {
                cout << "0" <<'\n';
            }
        }
        else if(s == "front")
        {
            cout << list.front()<<'\n';
        }
        else if(s == "back")
        {
            cout << list.back()<<'\n';
        }
        
    }
    return 0;
}