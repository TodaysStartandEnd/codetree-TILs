#include <iostream>
#include <queue>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    priority_queue<int> pq;

    for(int i=0; i<n;i++)
    {
        int x;
        cin >> x;
        pq.push(x);
    }
    while(pq.size()>1)
    {
        int x = pq.top();
        pq.pop();
        int y = pq.top();
        pq.pop();
        pq.push(x-y);
    }
    if(pq.empty())
    {
        cout << -1;
    }
    else
    {
        cout << pq.top(); 
    }

    return 0;
}