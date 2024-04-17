#include <iostream>
#include <string>
using namespace std;
int main() 
{
    int n;
    int count = 0;
    string start, target;
    cin >> n;
    cin >> start;
    cin >> target;
    for(int i=1; i<n; i++)
    {
        if(start[i-1] != target[i-1])
        {
            if(start[i] != target[i])
            {
                continue;
            }
            else
            {
                count++;
            }
        }

    }
    if(count==0 && start[0]!= target[0])
    {
        count++;
    }
    cout << count;

     
    return 0;
}