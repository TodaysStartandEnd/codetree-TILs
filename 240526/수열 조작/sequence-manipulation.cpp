#include <iostream>
#include <deque>
using namespace std;

int main() 
{
    deque<int> d;
    int n;
    cin >> n;
    for(int i=1; i<=7; i++)
    {
        d.push_back(i);  
    }
    while(d.size()!= 1)
    {
        d.pop_front();
        int x = d.front();
        d.pop_front();
        d.push_back(x);
    }
    cout << d.front();
    return 0;
}