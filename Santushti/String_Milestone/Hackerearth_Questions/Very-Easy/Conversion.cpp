#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    
    cin>>t;
    
    cin.ignore();

    while(t--) {
         
        string s;
        
        getline(cin, s);
        
        for(int i = 0; i < s.size(); ++i) {

            if(s[i] >= 'a' && s[i] <= 'z') {
                 
                cout<<s[i]-96;
            }
            else if(s[i] >= 'A' && s[i] <= 'Z') {

                cout<<s[i]-64;
            }
            else if(s[i] == ' ') {

                cout<<'$';
            }
        }
        cout<<"\n";
    }
    
    return 0;
}
/*

SAMPLE INPUT
------------
2
AMbuj verma
Aaaa bBBB

SAMPLE OUTPUT
-------------
11322110$22518131
1111$2222

*/
