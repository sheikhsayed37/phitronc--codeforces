#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for(int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;

        int a[n];          // array নেওয়া
        int even = 0;
        int odd = 0;

        // array input
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        // even-odd count
        for(int i = 0; i < n; i++)
        {
            if(a[i] % 2 == 0)
            {
              even++;  
            }
                
            else
            {
                odd++; 
            }
                
        }

        // answer
        if(n % 2 !=0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << abs(even - odd) / 2 << endl;
        }
        }

    return 0;
}
