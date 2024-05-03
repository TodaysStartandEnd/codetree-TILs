#include <iostream>
#include <queue>
using namespace std;
int main() 
{
    priority_queue<int> pq;
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        pq.push(-x);
    }
    int mul = 1;
    if(n>=3)
    {
        for(int i-0;i<3;i++)
        {
            int x = pq.top();
            pq.pop();
            mul*= -x;
        }
        
    }
    else
    {
        mul = -1;
    }
    cout << mul;
    return 0;
}