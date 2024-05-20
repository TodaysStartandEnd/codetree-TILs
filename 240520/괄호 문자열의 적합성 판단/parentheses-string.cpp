#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() 
{
    stack<char> st;
    string s;
    cin >> s;
    bool flag = 0;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == '(')
        {
            st.push('(');
        }
        else
        {
            if(!st.empty())
            {
                st.pop();
            }
            else
            {
                flag  = 1; 
                break;
            }
        }
    }
    if(!st.empty())
    {
        flag = 1;
    }
    if(flag == 1)
    {
        cout << "No";
    }
    else
    {
        cout << "Yes";
    }
    
    return 0;
}