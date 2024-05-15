#include <iostream>
#include <list>
using namespace std;

int main() 
{
    list<char> li;
    list<char>::iterator it = li.end();
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    for(int i=0; i<n; i++)
    {
        li.push_back(s[i]);   
    }
    while(m--)
    {
        string order;
        cin >> order;
        if(order == "L")
        {
            if(it != li.begin())
            {
                it--;
            }
        }
        else if(order == "R")
        {
            if(it != li.end())
            {
                it++;
            }
        }
        else if(order == "D")
        {
            if(it != li.end())
            {
                it = li.erase(it);
            }
        }
        else if(order == "P")
        {
            char x;
            cin >> x; 
            li.insert(it, x);
            
        }

    }
    for(list<char>::iterator it = li.begin(); it!=li.end();it++)
    {
        cout << *it;
    }
    

    return 0;
}