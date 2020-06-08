#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;

    cin>>t;

    while(t--) {

        string s;

        cin>>s;

        long long int ans = 1;
        
        unordered_map<char, int> mp;

        for(int i = 0; i < s.length(); ++i) {

            if(s[i]  == 'a' || s[i]  == 'e' || s[i] == 'i' ||s[i]  == 'o' || s[i]  == 'u' ) {
               
                mp[s[i]]++;
            }
            if(s[i] == '_') {
               
                long long int count = 0;
               
                for(auto it : mp) {
                    
                    count++;
                }
                
                ans *= count;
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
ab_ae_
abc

SAMPLE OUTPUT
-------------
2
1

*/
