#include <iostream>
#include <queue>
using namespace std;

int main() 
{
    priority_queue<int> pq;
    int n,m;
    cin >> n >> m;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        pq.push(x);
    }
    for(int i=0;i<m;i++)
    {
        int x= pq.top()-1;
        pq.pop();
        pq.push(x);
    }
    cout << pq.top();

    return 0;
}