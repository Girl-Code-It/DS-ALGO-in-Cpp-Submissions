#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    
    cin>>t;
    
    while(t--) {

        string s;
        
        cin>>s;
        
        int l = s.size();
        int flag = 1;
        
        for(int i = 0; i < l/2; ++i) {

            if(s[i] != s[l-i-1]) {

                flag=0;
            }
        }
        
        if(flag == 0) {
         
            cout<<"NO\n";
        }        
        else {
         
            cout<<"YES\n";
        }
    }
    return 0;
}
/*

SAMPLE INPUT
------------
1
aba

SAMPLE OUTPUT
-------------
YES

*/
