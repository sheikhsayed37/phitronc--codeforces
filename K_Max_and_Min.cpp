#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[3];
    for(int i=0;i<3;i++)
    {
        cin>> a[i];
    }
    int mx=INT_MIN;   // ata direct akta coto man ace ja nijer modde rakke pore loop e doke count kore
                       // ak ak kore
    for(int i=0;i<3;i++)
    {
        mx=max(a[i],mx);
    }
    int mn=INT_MAX;

    for(int i=0;i<3;i++)
    {
        mn=min(a[i],mn);
    }
    cout<< mn<<" "<<mx;
 

}