#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    
    cin>>t;
    
    while(t--) {

        string s;
        
        cin>>s;
        
        long long int x = 0;
        int l = s.size();
        
        for(int i = 0; i < l; ++i)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i'|| s[i] == 'o' || s[i] == 'u') {
                
                x++;
            }
        }
    
        cout<<x<<"\n";
    }
    return 0;
}
/*

SAMPLE INPUT
------------
1
hashes

SAMPLE OUTPUT
-------------
2

*/
