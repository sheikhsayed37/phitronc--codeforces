#include <bits/stdc++.h>
using namespace std;
class student
{
    public:
     string name;  // sobceye easy way string neayar
	int roll;
     string section;// akane atoh kahini korra lage na
	int math_marks;
	int cls;
    student(string n,int r ,string sec,int math,int c) // aken declare ta aibabe
    {
         name=n;    // direct name=n likha jai 
         roll=r;
         section=sec;
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