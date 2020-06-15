#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    
    cin>>n;
    
    int s[n];
    
    int a = 20, b = 30;
    
    s[0] = 20;
    s[1] = 30;

    for(int i = 2; i < n; ++i) {
        
        if(i%2 == 0) {
            a = a*2;
            s[i] = a;
        }
        else {
            b = b*3;
            s[i] = b;
        }
    }
    
    sort(s, s+n);
    
    cout<<s[n-1] + s[n-2] + abs(s[n-1]-s[n-2]);

    return 0;
}

/*

SAMPLE INPUT
------------
5

SAMPLE OUTPUT
-------------
180

*/
