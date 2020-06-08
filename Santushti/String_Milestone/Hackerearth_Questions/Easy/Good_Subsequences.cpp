#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long int t, m = 1000000007;

    cin>>t;

    while(t--) {

        string s;

        cin>>s;

        long long int ans = 1;
        
        sort(s.begin(), s.end());

        multiset<char> a(s.begin(), s.end());

        for(int i = 1; i < s.length(); i += a.count(s[i])) {

            ans *= (a.count(s[i]))%m;
            ans %= m;
        }
        cout<<ans<<"\n";
    }

    return 0;
}
/*

SAMPLE INPUT
------------
3
aaa
abba
abcd

SAMPLE OUTPUT
-------------
3
4
1

*/
