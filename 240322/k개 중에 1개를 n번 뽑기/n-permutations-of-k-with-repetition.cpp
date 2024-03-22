#include <iostream>
#include <vector>
using namespace std;

vector<int> ans;
int n,k;

void Print() 
{
    for(int i=0; i<n; i++)
    {
        cout << ans[i] <<" ";
    }
    cout << "\n";
}
void Choose(int cur)
{
    if(cur == n+1)
    {
        Print();
        return;
    }

    for(int i= 1; i<=k; i++)
    {
        ans.push_back(i);
        Choose(cur+1);
        ans.pop_back();
    }
   
}

int main() {
    cin >> k >> n;
    Choose(1);
   
    return 0;
}