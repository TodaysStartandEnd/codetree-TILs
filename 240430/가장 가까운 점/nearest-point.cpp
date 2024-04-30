#include <iostream>
#include <queue>
#include <tuple>
using namespace std;

int main() 
{
    priority_queue<tuple<long,int,int>> pq;
    int n,m;
    cin >> n >> m;
    while(n--)
    {
        int x, y;
        cin >> x >>y;
        pq.push({-(x+y), -x, -y});
    }
    while(m--)
    {
        tuple<long,int,int> t = pq.top();
        pq.pop();
        get<1>(t)=-(-get<1>(t)+2);
        get<2>(t)=-(-get<2>(t)+2);
        get<0>(t)=-(-get<1>(t)+-get<2>(t));
        pq.push(t);
    }
    cout << -get<1>(pq.top())<< " "<< -get<2>(pq.top());
    return 0;
}