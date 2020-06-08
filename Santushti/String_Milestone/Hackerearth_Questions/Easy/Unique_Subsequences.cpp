#include <bits/stdc++.h>
using namespace std;

int main() {

    long long int t;

    cin>>t;

    while(t--) {

        long long int n;

        cin>>n;

        string s;

        cin>>s;

        long long int size = 0;
        int flag = 1;
        char next = s[1];

        for(int i = 0; i < n-1; ++i) {

            if(s[i] != next) {

                if(!flag) {
                 
                    next = s[i];
                }
                
                else {
                    
                    next = s[i+2];
                }
                size++;
            }
            else {
                
                if(flag) {

                    flag = 0;
                    size++;
                    next = s[i];
                }   
            }
        }
        
        if(s[n-1] != s[n-2]) {
            
            size++;
        }

        cout<<size<<"\n";
    }
    return 0;
}
/*

SAMPLE INPUT
------------
2
5
ababa
5
aaaac

SAMPLE OUTPUT
-------------
5
2

*/
