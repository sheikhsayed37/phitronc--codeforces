#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "BRITISHEGYPTGHANA";

    int pos = s.find("EGYPT");

    if(pos != string::npos)
        cout << "FOUND at index " << pos << endl;
    else
        cout << "NOT FOUND" << endl;
}
