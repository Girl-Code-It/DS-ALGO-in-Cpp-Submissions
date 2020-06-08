#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;

    cin>>t;

    while(t--) {

        string s;

        cin>>s;

        sort(s.begin(),s.end());

        multiset<char> a(s.begin(),s.end());

        vector<int> ans;
        
        unordered_map<int, string> mp;

        for(int i = 0; i < s.length(); i++) {

            ans.push_back(a.count(s[i]));
            mp[a.count(s[i])] += s[i];
        }

        sort(ans.begin(), ans.end());

        multiset<int> cnt(ans.begin(),ans.end());

        for(int i = 0; i < ans.size(); i += cnt.count(ans[i])) {

            cout<<mp[ans[i]];
        }
        
        cout<<"\n";
    }
    return 0;
}
/*

SAMPLE INPUT
------------
3
aabbccdd
aabcc
hackerearth

SAMPLE OUTPUT
-------------
aabbccdd
baacc
cktaaeehhrr

*/
