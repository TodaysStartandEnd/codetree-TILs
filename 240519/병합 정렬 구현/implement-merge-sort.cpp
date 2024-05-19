#include <iostream>
using namespace std;

int arr[100001];

void merge(int low,int mid,int high)
{
    int merged_arr;
    int i = low;
    int j = mid +1;
    int k = low;
    
    while(i<=mid && j <= high)
    {
        if(arr[i] <= arr[j])
        [
            merged_arr[k] = arr[i];
            k+=1;
            i+=1;
        ]
        else
        {
            merged_arr[k] = arr[j];
            k+=1;
            i+=1;
        }
    }
    while(i<=mid)
    {
        merged_arr[k] = arr[i];
        k+=1;
        i+=1;
    }
    while(j<=high)
    {
        merged_arr[k] = arr[j];
        k+=1;
        j+=1;
    }
    for(k = low; k<=high; k++)
    {
        arr[k] = merged_arr[k];
    }
    return arr;
}

int merge_sort(int low, int high)
{
    if(low < high)
    {
        int mid = (low+high) / 2;
        merge_sort(low, high);
        merge_sort(low+1, high);
        merge(low,mid,high);
    }
        
}

int main() 
{
    int n;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    merge_sort(0,n-1);
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}