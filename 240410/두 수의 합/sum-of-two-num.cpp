#include <iostream>
#include <map>
using namespace std;

int main() 
{
    map<int,int> map;
    long n, k;
    long count = 0;

    cin >> n >> k;

    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        if(map.find(x) != map.end())
        {
            map[x]++;
        }
        else
        {
            map.insert({x,1});
        }
        
    }
    for(auto i=map.begin(); i!=map.end(); i++)
    {
        if(map.find(k-(i)->first)!=map.end())
        {
            if((map.find(k-(i)->first))->second != 0) // k합 만드는 다른 수가 먼저 존재했어서 체크 된 경우
            {
                i->second --;
                count ++;
            }
            
        }
        
    }
    cout << count;

    return 0;
}