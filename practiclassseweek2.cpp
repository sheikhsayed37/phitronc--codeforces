#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);

    string s1="john";

    int  count=0;

    stringstream ss(s);
    
    string word;
    while(ss>>word)
    {
        if(word==s1)
        { 
        count++;
        }
    }
    cout<<count;
}