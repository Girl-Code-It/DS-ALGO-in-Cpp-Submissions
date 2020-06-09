#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int n;

    cin>>n;

    while(n--) {
        
        string s;

        int flag = 1;

        cin>>s;

        for(int i = 0; i < s.length()/2; ++i) {
            
            if(s[i] != s[s.length()-i-1]) {
                
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
5
11111
8785878
51875
224614
547745

SAMPLE OUTPUT
-------------
YES
YES
NO
NO
YES

*/
