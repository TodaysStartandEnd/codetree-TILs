#include <iostream>
#include <queue>
using namespace std;
int main() 
{
    queue<int> q;
    int n;
    cin >> n ;
    while (n--)
    {
        string s;
        cin >> s; 
        if(s == "push")
        {
            int x;
            cin >> x;
            q.push(x);
        }
        else if(s =="pop")
        {
            cout << q.front() <<'\n';
            q.pop();
        }
        else if(s == "size")
        {
            cout << q.size() <<'\n';
        }
        else if(s == "empty")
        {
            cout << (q.empty() ? 1 : 0) <<'\n';
        }
        else if(s == "front")
        {
            cout << q.front() <<'\n';
        }
    }
    return 0;
}