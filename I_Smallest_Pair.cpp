#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    
for(int i=0;i<t;i++)

{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int minimum=INT_MAX;
    int value;

     for(int i=0;i<n;i++)
     {
     for(int j=i+1;j<n;j++)
     {
        value=a[i]+a[j]+j-i;
        minimum=min(minimum,value);
     }
 }
cout<<minimum<<endl;


}
}