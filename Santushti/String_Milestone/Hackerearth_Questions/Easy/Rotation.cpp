#include <bits/stdc++.h>
using namespace std;

int main() {

    long long int n;

    cin>>n;

    string s, t;

    cin>>s;

    cin>>t;

    long long int j = 0; 
    long long int size = 0, max = 0;

    for(int i = 0; i < s.length(); ++i) {

        if(t[j] == s[i]) {

            size++;
            j++;
        }
        else {

            if(size > max) {
                
                max = size;
            }
            j = 0;
            size = 0;
            
            if(s[i] == t[j]) {
            
                size++;
                j++;
            }
        }     
    }

    if(size > max) {
     
        max = size;
    }
    
    cout<<n-max;
    
    return 0;
}
/*

SAMPLE INPUT
------------
7
aaxaabc
aabcaax

SAMPLE OUTPUT
-------------
3

*/
