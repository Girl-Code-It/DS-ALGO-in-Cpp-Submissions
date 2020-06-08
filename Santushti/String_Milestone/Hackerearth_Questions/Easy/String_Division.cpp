#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;

    cin>>t;

    while(t--) {

        string s;

        cin>>s;

        multiset<char> a(s.begin(), s.end());

        sort(s.begin(), s.end());
        
        int k = 0;
        
        for(int i = 0; i < s.length(); i += a.count(s[i])) {
            
            k++;
        }
        
        if (s.length() > 9) {

            cout<<"YES\n";
        }
        else if(s.length() >= 7) {

            if(k >= 2) {

                cout<<"YES\n";
            }
            else {

                cout<<"NO\n";
            }
            
        }
        else if(s.length() == 6) {

            if(k >= 3) {

                cout<<"YES\n";
            }
            else if(k == 2) {

                if(a.count(s[0]) >=2 && a.count(s[0]) <=4) {

                    cout<<"YES\n";
                }
                else {

                    cout<<"NO\n";
                }
            }
            else {

                cout<<"NO\n";
            }
        }
        else if(s.length() == 5) {

            if(k >= 3) {

                cout<<"YES\n";
            }
            else {

                cout<<"NO\n";
            }
        }
        else if(s.length() == 4) {

            if(k == 4) {

                cout<<"YES\n";
            }
            else {

                cout<<"NO\n";
            }
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
2
ababca
aaabb

SAMPLE OUTPUT
-------------
YES
NO

*/
