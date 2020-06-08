#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;

    cin>>t;

    while(t--) {

        string s;

        cin>>s;

        int ans = 0, count = 0, flag = 1;

        for(int i = 0; i < s.length(); ++i) {

            if(s[i] == 'X') {

                flag = 0; 
            }
            if(s[i] == '*') {

                if(flag) {
                 
                    ans += count;
                }
                flag = 1;
                count = 0;
            }
            if(s[i] == 'O') {

                count++;
            }
        }

        if(flag) {
         
            ans += count;
        }
        cout<<ans<<"\n";
    }

    return 0;
}
/*

SAMPLE INPUT
------------
3
X*OO*XX
X*OX*XO*
X*OO*OO*X*OX*

SAMPLE OUTPUT
-------------
2
0
4

*/
