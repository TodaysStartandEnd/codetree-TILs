#include <iostream>
#include <stack>
using namespace std;

int main() 
{
    int n;
    stack <int> st;
    cin >> n;
    while(n--)
    {
        string s;
        cin >> s;
        if(s == "push")
        {
            int x;
            cin >> x;
            st.push(x);
        }
        else if(s == "pop")
        {

            cout << st.top() <<'\n';
            st.pop();
        }
        else if(s== "size")
        {
            cout << st.size() <<'\n';
        }
        else if(s == "empty")
        {
            if(st.empty())
            {
                cout << 1 <<'\n';
            }
            else
            {
                cout << 0 << '\n';
            }
        }
        else if(s == "top")
        {
            cout << st.top() <<'\n';
        }
    }
    return 0;
}