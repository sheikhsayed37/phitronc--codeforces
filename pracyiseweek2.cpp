#include <bits/stdc++.h>
using namespace std;
class student
{
    public:
    char name[30];
	int roll;
	char section[3];
	int math_marks;
	int cls;
    student(char n[22],int r ,char s[3],int math,int c)
    {
         strcpy(name,n);// char string neyar format ata ( destination,address)
                       // kotteke ashse kotai takbe
         roll=r;
         strcpy(section,s);
         math_marks=math;
         cls=c;
    }
};
int main()
{
     student sayed("sayed",45,"B",100,14);
     student saif("saif",61,"B",99,14);
     student sakib("sakib",45,"B",99,14);
     if(sayed.math_marks>saif.math_marks && sayed.math_marks>sakib.math_marks)
     {
        cout <<"sayed"<<" ";

     }
     else if(saif.math_marks>sayed.math_marks && saif.math_marks>sakib.math_marks)
     {
        cout <<"saif"<<" ";
        
     }
     else if(sakib.math_marks>sayed.math_marks && sakib.math_marks>saif.math_marks)
     {
        cout << "sakib"<< " ";
     }
     else
     {
        cout << "they are equal";
     }
}