#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    
    cin>>t;
        
    while(t--) {
        
        string str;

        cin>>str;
         
        int l = str.length();

        for(int i = l- 1; i >= 0; --i) {
            
            cout<<str[i];
        }
        
        cout<<"\n";
    }
        
    return 0;
}
/*

SAMPLE INPUT
------------
2
ab
aba

SAMPLE OUTPUT
-------------
ba
aba

*/
