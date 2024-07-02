#include <iostream>
using namespace std;

int a[100001];

void heapify(int n,int i)
{
  int largest = i;
  int l = i * 2;
  int r = i * 2 + 1;

  if ((l <= n) && (a[l] > a[largest]))
  {
    largest = l;
  }

  if ((r <= n) && (a[r] > a[largest]))
  {
    largest = r;
  }

  if (largest != i)
  {
    int tmp = a[i];
    a[i] = a[largest];
    a[largest] = tmp;
    heapify(n,largest);
  }
}

void heap_sort(int n)
{
  for(int i=n/2; i>=1 ;i--)
  {
    heapify(n, i);
  }

  for(int i= n ; i>1 ; i--)
  {
    int tmp = a[1];
    a[1] = a[i];
    a[i] = tmp;
    heapify(i - 1,1);
  }
}

int main() 
{
    int n;
    cin >> n;
    for(int i=1; i<=n ; i++)
    {
        cin >> a[i];
    }
    heap_sort(n);
    for(int i=1; i<=n ; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}