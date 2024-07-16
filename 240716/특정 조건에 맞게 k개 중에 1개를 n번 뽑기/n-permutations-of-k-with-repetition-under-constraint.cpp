#include <iostream>
#include <vector>
using namespace std;

vector <int> v;
int k, n;

void Choose(int num)
{
    if(num == n+1)
    {
        for(int i=0; i<n; i++)
        {
            cout << v[i] <<" ";
        }
        cout <<'\n';
        return;   
    }

    for(int i=1; i<=k; i++)
    {   
        if(v.size()>=2 &&((v[v.size()-1]==i) && (v[v.size()-2]==i)))
        {
            continue;
        }
        else
        {
            v.push_back(i);
            Choose(num+1);
            v.pop_back();
        }

        
    }
    return;
    
}

int main() 
{
    cin >> k >> n;
    Choose(1);
    return 0;
}