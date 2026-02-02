#include <bits/stdc++.h>
using namespace std;
class student 
{
    public:
    string name;
    int roll;
    int marks;
};
int main()
{
   int n;
   cin>> n;
   student a[n];
   for(int i=0;i<n;i++) // basic coding er motoi
   {
    cin>> a[i].name>>a[i].roll>>a[i].marks;

   }
   reverse(a,a+n);  // reverse kore deyar jonno sobgola 
   
   for(int i=0;i<n;i++)
   {
    cout<< a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
   } 

}


