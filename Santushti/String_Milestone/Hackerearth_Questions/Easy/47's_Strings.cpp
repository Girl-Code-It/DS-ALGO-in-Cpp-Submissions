#include <bits/stdc++.h>
using namespace std;

int main() {

    long long int t;

    cin>>t;

    while(t--) {
        
        string s;

        long long int ans = 0;

        cin>>s;

        int start = 0;

        for(int i = 0; i < s.length(); ++i) {

            if(s[i] == '$' || s[i] == '&') {

                ans += (i +1 -start)*(s.length() -i);
                start = i +1;
            }
        }

        cout<<ans<<"\n";
    }
    return 0;
}
/*

SAMPLE INPUT
------------
2
$bcd
flkjdh

SAMPLE OUTPUT
-------------
4
0

*/
