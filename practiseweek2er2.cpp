#include <bits/stdc++.h>
using namespace std;
 class Cricketer
{
    public:
	int jersey_no;
	string country;

};
int main()
{
     Cricketer *dhoni=new Cricketer[12];
     dhoni->jersey_no=7;
     dhoni->country="india";
     Cricketer *kohli=new Cricketer[12];
     kohli->jersey_no=9;
     kohli->country="faidia";
       kohli->jersey_no=dhoni->jersey_no;
     kohli->country=dhoni->country;                       // kohli =dhoni;it doesnt work .and not showing the output
    delete[] dhoni;
    cout<<(*kohli).jersey_no<<" "<<(*kohli).country<<" ";



    
    
}