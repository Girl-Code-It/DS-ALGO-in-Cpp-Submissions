#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
 
    cin>>t;
 
    while(t--) {

        string s;
 
        cin>>s;
 
        int flag = 1;
 
        for(int i = 0; i < s.length() -1; ++i) {

            int ans = abs( int( s[i+1] - s[i] ));
            
            if(!(ans == 1 or ans == 25)) {

                flag = 0;
                break;
            }
        }
 
        if(flag) {
            
            cout<<"YES\n";
        } 
        else {
            
            cout<<"NO\n";
        }
    }
    return 0;
}
/*

SAMPLE INPUT
------------
3
aba
zza
bcd

SAMPLE OUTPUT
-------------
YES
NO
YES

*/
