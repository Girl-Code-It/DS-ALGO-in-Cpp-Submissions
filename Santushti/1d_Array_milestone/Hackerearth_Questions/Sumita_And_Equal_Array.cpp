#include<bits/stdc++.h>
#define ll unsigned long int
using namespace std;

int main() {

    ll t;
     
    cin>>t;
    
    while(t--) {

        int x, y, z;
        
        ll n;
        
        cin>>n>>x>>y>>z;
      
        ll a[n];
    
        for(int i = 0; i < n; ++i) {
            
            cin>>a[i];
        }
         
        for(int i = 0; i < n; ++i) {

            while(a[i]%x == 0) {
              
                a[i] = a[i]/x;
            }
             
            while(a[i]%y == 0) {
                 
                a[i] = a[i]/y;
            }
             
            while(a[i]%z == 0) {
              
                a[i] = a[i]/z;
            }
        }
        int  s = 1;
         
        for(int i = 0; i < n-1; ++i) {

            if(a[i] != a[i+1]) {
                 
                s = 0;
                break;
            }
        }
     
        if(s == 0) {
         
            cout<<"She can't \n";
        }
        else {
         
            cout<<"She can \n";
        }     
    }
    
    return 0;
}
/*

SAMPLE INPUT
------------
2
2 2 2 2
2 4
3 2 3 2
2 6 7

SAMPLE OUTPUT
-------------
She can
She can't

*/
