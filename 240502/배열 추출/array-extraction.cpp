#include <iostream>
#include <queue>
using namespace std;

int main() 
{
    priority_queue<int> pq;
    int n;
    cin >> n;
    while(n--)
    {
        int x;
        cin >> x;
        if(x == 0)
        {
            if(pq.empty())
            {
                cout << 0 << '\n';
            }
            else
            {
                cout << pq.top() <<'\n';
                pq.pop();
            }
        }
        else
        {
            pq.push(x);    
        }
    }
    


    return 0;
}