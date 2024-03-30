#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int,int> umap;
    long n,m;
    cin >> n >>m ;
    for(int i=0; i<n; i++)
    {
        int k;
        cin >>k;
        if(umap.find(k)!=umap.end())
        {
            umap[k]++;
        }
        else
        {
            umap.insert({k,1});
        }
    }
    for(int i=0; i<m; i++)
    {
        int k;
        cin >> k;
        if(umap.find(k)==umap.end())
        {
            cout << 0<<' ';
        }
        else
        {
            cout << umap[k] << ' ';
        }

    }
    return 0;
}