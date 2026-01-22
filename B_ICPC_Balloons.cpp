#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;  // number of test cases

    for(int tc = 0; tc < t; tc++) {
        int n;
        cin >> n;          // string length
        string s;
        cin >> s;          // problem order

        int sum = n;        // প্রতিটা solve gives 1 balloon
        int seen[26] = {0}; // A–Z problems

        for(int i = 0; i < n; i++)
        {
            int idx = s[i] - 'A';
            if(seen[idx] == 0) 
            {                         // first time solve
                sum++;                // extra balloon
                seen[idx] = 1;        // mark as seen
            }
        }

        cout << sum << endl;
    }

    return 0;
} //ai code tai bojao kibae cinta korso setao bolo r bokjai daw