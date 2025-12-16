#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A,B;
    char S;
    cin>>A>>S>> B;
  if(S=='>')
  {
    if(A>B)
    {
        cout<<"Right";
    }
    else
       {
        cout<<"Wrong";
       }   
}
    if(S=='<')
    {
        if(A<B)
       {
        cout<<"Right";  // akne dekho jodi a asilei coto hoto tbe right r nahole wrong
       }
       else
       {
        cout<<"Wrong";
       }    

}
if(S=='=')
    {
        if(A==B)
       {
        cout<<"Right";
       }
      else
       {
        cout<<"Wrong";
       }
}
}