#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {

    ll t;
    
    cin>>t;
    
    while(t--) {

        ll n;
        
        cin>>n;
        
        ll p, q, k[n];
        
        cin>>p;
        
        ll a[p];
        
        for(int i = 0; i < p; ++i) {
            
            cin>>a[i];
        }
        
        cin>>q;
        
        ll b[q];
        
        for(int i = 0; i < q; ++i) {
            
            cin>>b[i];
        }
        
         ll x = 0;
          
        for(int i = 0; i < n; ++i) {

            k[i] = n-i;
           
            for(int j = 0; j < p; ++j) {

                if(k[i] == a[j]) {
                    
                    k[i] = 0;
                }
            }
        }
       
        for(int i = 0; i < n; ++i) {

            for(int j = 0; j < q; ++j) {

                if(k[i] == b[j]) {
                    
                    k[i] = 0;
                }
            }
        }
        
        for(int i = 0; i < n; ++i) {

            if(k[i] == 0) {
                
                x++;
            }
        }
        
        if(x == n) {
            
            cout<<"YES\n";
        }
        else {
            
            cout<<"NO\n";
        }
    }
    
    return 0;
}
/*

SAMPLE INPUT
------------
2
4
3 1 2 3
2 2 4
4
3 1 2 3
2 2 3

SAMPLE OUTPUT
-------------
YES
NO

*/
