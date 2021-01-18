#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n, k, a[100000];

    int x = 0;

    int t = 0;

    cin>>n>>k;

    for(int i = 0; i < n; ++i) {
        
        cin>>a[i];
    }

    for(int i = 0; i < n; ++i) {
        
        if(a[i] <= k) {
            
            t++;
        }
        else {
            
            x++;

            if(x > 1) {
                
                break;
            }
        }
    }
    cout<<t;
    
    return 0;
}
/*

SAMPLE INPUT
------------
7 6
4 3 7 6 7 2 2

SAMPLE OUTPUT
-------------
3

*/
