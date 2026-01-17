#include <bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   getline(cin, s);

   for(int i=0;i<s.size();i++)
   {
     char c=towupper(s[i]);

   } 
   
   stringstream ss(s);
   string word;
    ss>>word;
    for(int i=0;i<word.size();i++)
   {
        if (word[i]=="EGYPT")
         {
            continue;           // এই word গুলো ignore হবে
            
         }
    
   }
   cout<< word<<" ";
   


}