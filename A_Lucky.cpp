#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>> t;

    for(int i=0;i<t;i++)
    {
       string test;
       cin>>test;
       int  sum1=0,sum2=0;
       for(int i=0;i<3;i++)
       {
         sum1= sum1+test[i]-'0';   
       }
      for(int i=3;i<6;i++)
       {
         sum2= sum2+test[i]-'0';
       }


       if(sum1==sum2)
       {
        cout << "YES"<<endl;
       }
       else
       {
         cout << "NO"<<endl;
       }
       
        
    }
   
}