#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> pq;
    int n;
    cin >> n;
    while(n--)
    {
        string s; 
        cin >> s;
        if(s == "push")
        {
            int a;
            cin >> a;
            pq.push(a);
        }
        else if(s == "pop")
        {
            cout << pq.top() <<'\n';
            pq.pop();
        }
        else if(s == "size")
        {
            cout << pq.size() << '\n';
        }
        else if(s== "empty")
        {
            if(pq.empty())
            {
                cout << 1 <<'\n';
            }
            else
            {
                cout << 0 << '\n';
            }
        }
        else if(s== "top")
        {
            cout << pq.top() << '\n';
        }
    }
}