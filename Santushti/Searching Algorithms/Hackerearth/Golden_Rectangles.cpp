#include<bits/stdc++.h>
using namespace std;

int main() {

    long long int t;

    cin>>t;
    
    long int count = 0;

    while(t--) {

        double l, b;

        cin>>l>>b;

        double ans = l/b;
        double rev = b/l;
        
        if(ans >= 1.6 && ans <= 1.7) {
            
            count++;
        }
        else {
            
            if(rev >= 1.6 && rev <= 1.7) {
                
                count++;
            }
        }
        
    }

    cout<<count;

    return 0;
}
