#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int,int> map;
    int n, k;
    long count = 0;

    cin >> n >> k;

    for(int i = 0; i < n; i++) 
    {
        int x;
        cin >> x;
        if(map.find(x) != map.end()) 
        {
            map[x]++;
        } else 
        {
            map.insert({x, 1});
        }
    }

    for(auto i = map.begin(); i != map.end(); i++) 
    {
        if(map.find(k - i->first) != map.end() && map[k - i->first] > 0) 
        {
            if (k - i->first == i->first) 
            {
                count += (i->second * (i->second - 1)) / 2;
            } else 
            {
                count += i->second * map[k - i->first];
            }
            map[i->first] = 0;
            map[k - i->first] = 0;
        }
    }

    cout << count;

    return 0;
}