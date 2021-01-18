#include <bits/stdc++.h>
using namespace std;

int main() {

    long long t;
    
    cin>>t;
    
    while(t--) {

        long long n;
        
        cin>>n;
        
        long long a[n], k[n];
        
        for(int i = 0; i < n; ++i) {
            
            cin>>a[i];
        }

        multiset<int> s(a,a+n);
        
        for(int i = 0; i < n; ++i) {

            k[i] = s.count(a[i]);
            
            if(k[i] == 1) {

                cout<<a[i]<<"\n";
                break;
            }
        }        
    }
    return 0;
}
/*

SAMPLE INPUT
------------
1
7
1 2 2 1 2 1 4

SAMPLE OUTPUT
-------------
4

*/
