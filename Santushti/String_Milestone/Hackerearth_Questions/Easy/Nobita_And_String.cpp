#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long int t;
    
    cin>>t;
    
    cin.ignore();

    while(t--) {

        string s;
    
        getline(cin, s);

        string word = "";
        string ans = "";
    
        for(int i = s.length()-1; i >= 0; --i) {
           
            word += s[i];
                
            if(s[i-1] == ' ') {   
                
                reverse(word.begin(), word.end());
                ans += word;
                ans += " ";
                word = "";
                i--;
            }
            if(i == 0) {
                
                reverse(word.begin(), word.end());
                ans += word;
            }
        }
    
        cout<<ans<<"\n";
    }
    return 0;
}
/*

SAMPLE INPUT
------------
1
hello world

SAMPLE OUTPUT
-------------
world hello

*/
