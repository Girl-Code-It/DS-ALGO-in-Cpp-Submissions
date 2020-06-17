#include <bits/stdc++.h>
using namespace std;

int main() {
      
    long long t, n, k, a[1000000];
         
    cin>>t;
      
    while(t--) {
            
        cin>>n>>k;
          
        for(int j = 0; j < n; ++j) {

            cin>>a[j];
        }      
                
        if(k > n) {
              
            k = k%n;
        }
          
        for(int j = 0; j < n; ++j) {
            
            cout<<a[(n-k+j)%n]<<" ";
        }  
              
        cout<<"\n";
          
    }
      
    return 0;
}
/*

SAMPLE INPUT
------------
1
5 2
1 2 3 4 5

SAMPLE OUTPUT
-------------
4 5 1 2 3

*/
