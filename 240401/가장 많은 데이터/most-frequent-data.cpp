#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    int max = 0;
    cin >> n;
    unordered_map<string, int> umap;
    while(n--)
    {
        string s;
        cin >> s;
        if(umap.find(s)==umap.end())
        {
            umap.insert({s,1});
            if(max <umap[s])
            {
                max = umap[s];
            }
        }
        else
        {
            umap[s]++;
            if(max < umap[s])
            {
                max = umap[s];
            }
        }
    }
    cout << max ;
    return 0;
}