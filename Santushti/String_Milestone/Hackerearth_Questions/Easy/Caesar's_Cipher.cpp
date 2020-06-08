#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;

    cin>>t;

    while(t--) {

        string a, b;

        cin>>a;
        cin>>b;

        int ans[a.length()];

        unordered_map<int, int> mp;

        for(int i = 0; i < a.length(); ++i) {

            ans[i] = int(abs(a[i]-b[i]));
            
            if(a[i] > b[i]) {
                ans[i] = 26 - ans[i];
            }
        }

        for(int i = 0; i < a.length(); ++i) {

            mp[ans[i]]++; 
        }
        if(mp[ans[0]] == a.length()) {
            
            cout<<ans[0]<<"\n";
        }
        else {
            
            cout<<"-1\n";
        }
    }

    return 0;
}
/*

SAMPLE INPUT
------------
2
ABC
DEF
AAA
PQR

SAMPLE OUTPUT
-------------
3
-1

*/
