#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    
    cin>>t;
    
    while(t--) {

        string s;
       
        int flag = 1;
        
        cin>>s;
        
        int l = s.size();
        
        for(int i = 0; i < l; ++i) {

            if(s[i] != s[l-i-1]) {

                flag = 0;
                break;
            }
        }
        if(flag) {

            for(int i = 0; i < l; ++i) {

                if(s[i] == '2' || s[i] == '3' || s[i] == '4' || s[i] == '5' || s[i] == '6' || s[i] == '7' || s[i] == '9') {

                    flag = 0;
                    break;
                }
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
2
101
020

SAMPLE OUTPUT
-------------
YES
NO

*/
