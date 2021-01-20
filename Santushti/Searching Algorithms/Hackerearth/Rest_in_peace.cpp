#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;

    cin>>t;

    while(t--) {

        int n;

        string ans = "The streak lives still in our heart!";

        cin>>n;

        if(n%21 == 0) {

            ans = "The streak is broken!";
        }
        else {
            int prev = n%10;
            while(n) {
                
                int next = n%10;
                n = n/10;
                if(prev == 1 && next == 2) {

                    ans = "The streak is broken!";
                    break;
                }
                prev = next;                
            }
        }

        cout<<ans<<"\n";
    }
    return 0;
}
