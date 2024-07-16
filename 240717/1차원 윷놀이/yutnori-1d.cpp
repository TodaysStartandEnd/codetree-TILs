#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m, k;
vector<int> num;
vector<int> sum;
int total_score = 0;

void Choose(int cnt, int score)
{
    if(cnt == n)
    {
        total_score = max(total_score, score);
        return;
    }
    for(int i=0; i<k; i++)
    {
        int before = sum[i];
        if(sum[i]<m)
        {
            sum[i]+=num[cnt];
            if(sum[i] >=m)
            {
                sum[i] = m;
                Choose(cnt+1, score+1);
            }
            else
            {
                Choose(cnt+1, score);
            }
            sum[i] = before;
        }
        else
        {
            Choose(cnt+1, score);
        }
    }

}

int main() 
{
    cin >> n >> m >> k;
    for(int i=0; i<n; i++)
    {
        int t;
        cin >> t;
        num.push_back(t);
    }
    for(int i=0; i<k; i++)
    {
        sum.push_back(1);
    }
    Choose(0,0);

    cout <<total_score <<'\n';

    
    return 0;
}