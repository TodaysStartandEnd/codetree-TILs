#include <iostream>
using namespace std;
// 오름차순 정렬이라고 했을 때 버블 정렬은 가장 끝 최대값부터, 선택 정렬은 가장 앞 최솟값부터 만들어주는 특징이 있는듯
int main() 
{
    int n;
    int a[101];
    cin >> n;
    for(int i=0;i<n; i++)
    {
        cin >> a[i];
    }
    for(int i=0; i<n-1; i++)
    {
        int min = i;
        for(int j=i+1; j<n; j++)
        {
            if(a[min]>a[j])
            {
                min = j;
            } 
        }
        int tmp = a[min];
        a[min] = a[i];
        a[i] = tmp;
    }
    for(int i=0;i<n; i++)
    {
        cout << a[i] << ' ';
    }
    return 0;
}