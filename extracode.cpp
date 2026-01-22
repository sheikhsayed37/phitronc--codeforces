#include <bits/stdc++.h>
using namespace std;

int main()
 {
    string s = "HELLOWORLD";

    int pos = s.find("EGYPT");   // egypt er index kojetese string tate

    if(pos != string::npos)  // ata dara index ta paisi bojacce
    
        cout << "Found at index " << pos << endl;

    else

        cout << "Not Found" << endl;
        
}
