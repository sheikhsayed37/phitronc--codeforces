#include <bits/stdc++.h>
using namespace std;

int main()
 {
    string s;
    cin >> s;
    string s2;
     s2=s;   // s2 er modde s k save kore raksi jeni s k modify korte pari

    for(int i = 0; i < s.size(); i++)
    {
        s[i] = tolower(s[i]);
    }
    reverse(s.begin(),s.end());
    
    if(s2==s)
    {
        cout <<"YES"<<endl;
    } 
    else
    {
        cout<<"NO"<<endl;
    }


    
}
