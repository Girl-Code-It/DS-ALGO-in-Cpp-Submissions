#include<bits/stdc++.h>
using namespace std;

int main() {

    long long int t;

    cin>>t;

    while(t--) {

        string s1, s2;

        cin>>s1>>s2;

        int j = 0;

        string ans = "We are only friends";
        
        for(long long int i = 0; i < s2.length(); ++i) {

            if(s1[j] == s2[i]) {

                j++;
            }
        }
        if(j == s1.length()) {

            ans = "Love you too";
        }
        cout<<ans<<"\n";       
    }
    return 0;
}
