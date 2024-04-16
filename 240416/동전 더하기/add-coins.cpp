#include <iostream>
#include <stack>
using namespace std;

int main() 
{
    stack <int> st;
    int n, k;
    int count = 0;
    cin >> n >> k;
    
    for(int i=0; i<n; i++)
    {
        int x; 
        cin >> x;
        st.push(x);
    }
    while(!st.empty())
    {
        int x = st.top();
        st.pop();
        count += k/x;
        k = k%x;
    }
    cout << count;

    return 0;
}