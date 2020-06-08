#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;

    cin>>t;
    
    int ans;

    char ans_c;

    unordered_map<string, int> mp;
    
    while(t--) { 
        
        string s;

        cin>>s;
        
        mp[s]++;
        
        reverse(s.begin(), s.end());
        
        mp[s]++;
        
        if(mp[s] == 2) {

            ans = s.length();
            ans_c = s[s.length()/2];
        }        
    }
    cout<<ans<<" "<<ans_c;
    
    return 0;
}
/*

SAMPLE INPUT
------------
4
abc
def
feg
cba

SAMPLE OUTPUT
-------------
3 b

*/
