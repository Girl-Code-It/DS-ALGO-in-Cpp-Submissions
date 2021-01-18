#include<iostream>
using namespace std;

int main()
{
    int t, x;
    long long n, p, q, r;
    
    cin>>t;
    
    for(int i = 0; i < t ; i++){
        
        cin>>n>>p>>q>>r;
        x=0;
        x=n/p + n/q + n/r;
        for(int k = 1 ; k < n ; k++){
            if((p*k) <= n) {
                
                if((p*k)%q == 0 || (p*k)%r == 0)
                x--;
            }
            if((q*k)<=n) {
                if((q*k)%p == 0 || (q*k)%r == 0)
                x--;
            }
            if((r*k)<=n) {
                
                if((r*k)%p == 0 || (r*k)%q == 0)
                x--;
            }
        }
        cout<<x<<endl;
    }
    return 0;
}

