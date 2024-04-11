#include <iostream>
#include <set>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    
    while(t--)
    {
        set <int> set;
        int k; 
        cin >> k; 
        for(int i=0; i<k; i++)
        {
            string s;
            cin >> s;
            if(s == "I")
            {
                int n;
                cin >> n;
                set.insert(n);

            }
            else if(s == "D")
            {
                int n;
                cin >> n;
                if(set.empty())
                {
                    continue;
                }
                if(n == 1)
                {
                    set.erase(*(set.rbegin()));

                }
                else if (n == -1)
                {
                    set.erase(*(set.begin()));
                }

            }

        }
        if(set.empty())
        {
            cout << "EMPTY" << '\n';
        }
        else
        {
            cout << *(set.rbegin()) << " " << *(set.begin()) << '\n';
        }
    }
    return 0;
}