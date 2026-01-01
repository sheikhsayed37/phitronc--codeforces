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
     dhoni->jersey_no=7;   // ata direct heap memory gia address ta raktese
     dhoni->country="india"; //ata direct heap memory gia address ta raktese

     Cricketer *kohli=new Cricketer[12];
     kohli->jersey_no=9;
     kohli->country="faidia";

 
       kohli->jersey_no=dhoni->jersey_no;
     kohli->country=dhoni->country;   
                                     // kohli =dhoni;it doesnt work .and not showing the output
   
    cout<<(*kohli).jersey_no<<" "<<(*kohli).country<<" "<<endl;
    



    
    
}