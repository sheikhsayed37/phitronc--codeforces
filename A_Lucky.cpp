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
}//akane   -'0' kno disi karon test[i] akane soinka tkleo agola character hisebe kaj kore  
                                                    //Computer character রাখে ASCII value দিয়ে।
                                                    // Character	ASCII value
                                                                // '0'=	48
                                                                // '1'=	49        like 3 er ketre 51 hole 51-48=3 pawa jai 
                                                                // '2'=	50 
                                                                // '3'=	51

                                                             