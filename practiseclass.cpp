#include <bits/stdc++.h>
using namespace std;
class student 
{
    public:
    string name;
    int roll;
    int marks;
};

bool cmp(student a, student b)
{
    if(a.marks != b.marks)   // akto airkm kora lagse jeno marks same hole roll er 
           return a.marks > b.marks;              //upor condition dite pari
                                           // descending marks
    else
        return a.roll < b.roll;     // ascending roll
}
int main()
{
   int n;
   cin>> n;
   student a[n];
   for(int i=0;i<n;i++) // basic coding er motoi
   {
    cin>> a[i].name>>a[i].roll>>a[i].marks;

   }
  sort(a,a+n,cmp);
  for(int i=0;i<n;i++)
   {
    cout<< a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
   } 

}


