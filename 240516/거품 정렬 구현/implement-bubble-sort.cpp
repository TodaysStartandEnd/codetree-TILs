#include <iostream>
using namespace std;
// 정석 버블 정렬 (앞에서부터 2개씩 처음부터 끝까지 전체 정렬 될 때까지 계속 비교)
int main() 
{
    int a[101];
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    bool sorted;
    do
    {
        sorted = 1;
        for(int i=0; i<n-1; i++)
        {
            if(a[i]>a[i+1])
            {
                int tmp = a[i];
                a[i] = a[i+1];
                a[i+1] = tmp;
                sorted = 0;
            }
            
        }

    }while(sorted == 0);
    for(int i=0; i<n; i++)
    {
        cout << a[i] <<" ";
    }
    return 0;
}