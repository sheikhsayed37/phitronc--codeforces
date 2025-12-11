#include <bits/stdc++.h>
using namespace std;
int main()
{
    char x;
    cin>> x;
    if(x>='0' && x<='9')    // এখানে 0 আর 9 digit না, integer।
                                //কিন্তু তোমাকে compare করতে হবে character '0' এবং '9' এর সাথে।
    {
        cout<<"IS DIGIT"<<endl;   
    }
   else
   {
      cout<< "ALPHA"<<endl;
      if(x>='A' && x<='Z')
      {
        cout << "IS CAPITAL"<<endl;
      }
      else 
      {
        cout << "IS SMALL"<<endl;
      }
   }
return 0;
}