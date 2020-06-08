#include<bits/stdc++.h>
using namespace std;

bool isprime(int num) {

    int prime[num+1];

    prime[0] = 0;
    prime[1] = 0;
    prime[2] = 1;

    for(int i = 3; i <= num; ++i) {

        if(i%2) {
         
            prime[i] = 1;
        }
        else {
   
            prime[i] = 0;
        }
    }

    for(int i = 3 ; i*i <= num ; i += 2) {

        if(prime[i]) {

            for(int j = 2*i; j <= num; j += i) {

                prime[j] = 0;
            }
        }
    }

    if(prime[num]) {
     
        return true;
    }
    else {
        
        return false;
    }
}
int main() {

    int t;

    cin>>t;

    while(t--) {

        int n;

        cin>>n;

        string s;

        cin>>s;

        for(int i = 0; i < n; ++i) {               
            
            int k = int(s[i]);
            int l = k;
        
            if(k < 65) {

                k = 65;
                l = 65;
            }
            else if(s[i] > 123) {

                k = 123;
                l = 123;
            }
            else if(s[i] > 91 && s[i] < 97) {

                l = k-(97-k);

                for(int j = k-(97-k); j <= 91; ++j) {

                    if(isprime(j)) {
                        l = j;
                    }
                }
                k = 97;
            }
            while(!(isprime(k)) && !(isprime(l)))
            {   
                if(k < 92 || k < 124) {
                    
                    k++;
                }
                if(l > 64 || l > 96) {
                    
                    l--;
                }
            }

            if(isprime(l)) {
             
                s[i] = char(l);
            }
            else if(isprime(k)) {
                
                s[i] = char(k);
            }
        }

        cout<<s<<"\n";
    }

    return 0;
}
/*

SAMPLE INPUT
------------
1
8
KINGKONG
 
SAMPLE OUTPUT
-------------
IIOGIOOG

*/
