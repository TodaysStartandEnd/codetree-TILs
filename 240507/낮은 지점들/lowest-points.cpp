#include <iostream>
#include <unordered_map>
using namespace std;

int main() 
{
    unordered_map<int, int> umap;
    int n;
    long max = 0;
    cin >> n;
    while(n--)
    {
        int x, y;
        cin >> x >> y;
        if(umap.find(x)!=umap.end())
        {
            if(umap[x]>y)
            {
                umap[x] = y;
            }
        }
        else
        {
            umap[x] = y;
        }
    }
    for(auto i = umap.begin(); i!=umap.end(); i++)
    {
        max += i->second;
    }
    cout << max;
    return 0;
}