#include <iostream>
#include <unordered_map>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    unordered_map<long, long> umap;

    while(n--)
    {
        string s;
        cin >> s;
        if(s == "add")
        {
            long k,v;
            cin >> k >> v;
            if(umap.find(k)!=umap.end())
            {
                umap.erase(k);
            }
            umap.insert({k,v});
        }
        else if(s == "remove")
        {
            long k;
            cin >> k;
            umap.erase(k);
        }
        else if(s == "find")
        {
            long k;
            cin >> k;
            if(umap.find(k)!=umap.end())
            {
                cout << (*umap.find(k)).second<<'\n';
            }
            else
            {
                cout << "None" << '\n';
            }
        }
    }
    return 0;
}