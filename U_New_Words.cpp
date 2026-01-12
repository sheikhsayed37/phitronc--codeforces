#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>> s;
    int G=0,E=0,Y=0,P=0,T=0;
    for(int i=0;i<s.size();i++)
    {
        char c=towupper(s[i]);  // o jeta korse s string er sob word k upper hisebe count korse
                            // karon akne boro coto mix hoiee ase ..aiketre jodi E or e k alada hisebe count kore felbe 
        
          if(c=='G')
          {
            G++;
          }
          else if(c=='E')
          {
            E++;
          }
          else if(c=='Y')
          {
            Y++;
          }
          else if(c=='P')
          {
            P++;
          }
          else if(c=='T')
          {
            T++;
          }   
    }
    cout << min({E,G,Y,P,T});


}