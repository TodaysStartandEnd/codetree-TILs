#include <iostream>
#include <map>
using namespace std;

int main() 
{
    bool s[100001];
    int count =0;
    int n, m ;
    cin >> n >> m;
    for(int i=0; i<n;i++)
    {
        int x; 
        int flag = 0;
        cin >> x;
        for(int j=x; j>=1; j--)
        {
            if(s[j] == 0)
            {
                s[j] = 1;
                flag = 1;
                count++;
                break;
            }
        }
        if(flag == 0)
        {
            break;
        }
    }
    cout << count;
    return 0;
}