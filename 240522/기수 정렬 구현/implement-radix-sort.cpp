#include <iostream>
#include <list>
using namespace std;

int main() 
{
    int arr[100001];
    int n;
    int max =0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(max < arr[i])
        {
            max = arr[i];
        }
        
    }
    for (int exp = 1; max / exp > 0; exp *= 10)
    {
        list<int> tmp[10];
        
        for (int j = 0; j < n; j++)
        {
            int digit = (arr[j] / exp) % 10;
            tmp[digit].push_back(arr[j]);
        }
        
        int index = 0;
        for (int j = 0; j < 10; j++)
        {
            for (int val : tmp[j])
            {
                arr[index] = val;
                index++;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}