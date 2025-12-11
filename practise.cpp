#include <bits/stdc++.h>
using namespace std;

int *get_array(int N)   
{
    int *a=new int[N];   // delete a hower jonno pointer based funtion

    for(int i=0;i<N;i++)
    {
        cin>>a[i];
    }
    return a;


}
int main()
{
    int N;
    cin>> N;
     int *value=get_array(N);  // format gola mone rakio
    for(int i=0;i<N;i++)
    {
        cout<<value[i]<<" ";
    }
    return 0;
}