//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
// string s;
//cin>> s;
// for(int i = 0; i < s.size(); i++)
// {
//   s[i] = toupper(s[i]);
// }
  
//for(int i=0;i<s.size()-5;i++)
//{
//if(s.substr(i,5)=="EGYPT")  
//{
// s.replace(i,5," ");
//}
//}
//cout<<s;
//}


#include <bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   cin>> s;
   for(int i = 0; i < s.size(); i++)
  {
   s[i] = toupper(s[i]);
  }

   while(s.find("EGYPT")!=string:: npos)    //  string::npos = “খুঁজে পাওয়া যায়নি”

   {

      s.replace(s.find("EGYPT"),5," ");
      
   } 

   cout<< s;

}
