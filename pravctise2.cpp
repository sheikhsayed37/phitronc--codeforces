#include  <bits/stdc++.h>
using namespace std;
int main()
{
    int   N;
    cin>> N;
    int A[N];
    for(int i=0;i<N;i++)
    {
        cin>> A[i];
    }
    int M;
    cin>> M;
    int B[M];
    for(int i=0;i<N;i++)
    {
        B[i]=A[i];
    }
    for(int i=N;i<M;i++)  // akne N<M ta boleo n+m dio na karon n=3,m=8
                      // tkn jogfol 11 hbe output e 11 ta value ashbe kinto amr lagbe 
                      // 8 ta value 

    {
        cin>>B[i];
    }
    for(int i=0;i<M;i++)
    {
        cout<<B[i]<<" ";
    }
   



}