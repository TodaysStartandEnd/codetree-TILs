#include <iostream>
using namespace std;
// 변형 버블 정렬 (정석 버블 정렬 시 처음부터 끝끼지 비교하면 가장 마지막은 정렬됨을 이용)
int main() 
{
    int a[101];
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(a[j] > a[j+1])
            {
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }    
    for(int i=0; i<n; i++)
    {
        cout << a[i] <<" ";
    }
    return 0;
}