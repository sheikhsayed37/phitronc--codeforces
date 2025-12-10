#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int x[n];
    for(int i=n-1;i>=0;i--)  // doitai array nia lagbeaktate arekta bosai then kaj
    {
        x[i]=a[i];
   
}
for(int i=n-1;i>=0;i--)
    {
       cout<<x[i]<<" ";
    }
    

}