#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>> t;
    for(int i=0;i<t;i++)
    {
        int x;
        cin>> x;
        int a[x];
        int even=0,odd=0;
        for(int i=0;i<x;i++)
        {
          cin>> a[i];
        }
        for(int i=0;i<x;i++)
        {
          if(a[i]%2==0)
          {
            even++;
          }
          else
          {
            odd++;
          } 

        }
       if(x%2==1)
       {
           cout<<-1<<endl;
       }
       else
       {
        cout<<abs(even-odd)/2<<endl;
       }

    }
}