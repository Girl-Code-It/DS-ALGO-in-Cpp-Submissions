#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;

    cin>>t;

    while(t--) {

        unordered_map<char, int> freq;
        
        vector<char> ans;

        string s;

        cin>>s;

        for(int i = 0; i < s.length(); ++i) {

            freq[s[i]]++;
            
            if(freq[s[i]] == 1) {
                
                ans.push_back(s[i]);
            }
        }

        for(int i = 0; i < ans.size(); ++i) {
            
            cout<<ans[i];
        }
        cout<<"\n";
    }
    return 0;
}
/*

SAMPLE INPUT
------------
2
aasdvasvavda
sajhags

SAMPLE OUTPUT
-------------
asdv
sajhg

*/
