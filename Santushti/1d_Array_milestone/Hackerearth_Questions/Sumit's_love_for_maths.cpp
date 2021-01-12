#include<bits/stdc++.h>
#include<boost/math/common_factor.hpp>
typedef long long ll;
using namespace std;

int main() {

    ll t;
    
    cin>>t;
    
    while(t--) {

        ll n, a, b, c;
        
        cin>>n>>a>>b>>c;
        
        ll d, e, f, g, x = 0;
        
        d = boost::math::lcm(a, b);
        e = boost::math::lcm(b, c);
        f = boost::math::lcm(a, c);
        g = boost::math::lcm(d, c);
        
        x = (n/a) + (n/b) + (n/c) - ((n/d) + (n/e) + (n/f)) + (n/g);   
    
        cout<<x<<"\n";    
    }
    return 0;
}
