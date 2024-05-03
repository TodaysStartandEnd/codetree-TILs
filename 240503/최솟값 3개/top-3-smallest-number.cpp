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
        
        int a[3];
        long mul = 1;
        if(i>=2)
        {
            for(int j=0;j<3;j++)
            {
                a[j] = pq.top();
                pq.pop();
                mul*= -a[j];
            }
            for(int j=0;j<3;j++)
            {
                pq.push(a[j]);
            }
        
        }
        else
        {
            mul = -1;
        }
        cout << mul <<'\n';
    }
    
    return 0;
}