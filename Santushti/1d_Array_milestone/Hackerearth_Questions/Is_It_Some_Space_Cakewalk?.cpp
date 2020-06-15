#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {

    ll n;
    
    cin>>n;
    
    ll a[n];
    
    for(int i = 0; i < n; ++i) {

        cin>>a[i];
    }
    
    sort(a, a+n);
    
    int k = 1;
    
    multiset<int> s(a, a+n);
    
    for(int i = 0; i < n; i += s.count(a[i])) {

        k++;
    }
    
    cout<<k;
    
    return 0;
}
/*

SAMPLE INPUT
------------
6
1 2 1 2 3 5

SAMPLE OUTPUT
-------------
5

*/
