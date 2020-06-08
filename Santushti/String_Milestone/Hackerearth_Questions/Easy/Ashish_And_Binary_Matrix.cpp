#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long int t;
    
    cin>>t;
    
    while(t--) {
        
        long long int n, m;
        
        cin>>n>>m;
        
        unordered_map<string, int> mp;
        
        int flag = 1;
        
        for(int i = 0; i < n; ++i) {
            
            string s;
            
            cin>>s;
            
            mp[s]++;
            
            if(mp[s] > 1) {
                
                flag = 0;
            }
        }
        
        if(flag) {
            
            cout<<"Yes\n";
        }
        else {
           
            cout<<"No\n";
        }
    }
	return 0;
}
/*

SAMPLE INPUT
------------

2
3 3
101
000
100
2 2
11
11

SAMPLE OUTPUT
-------------

Yes
No

*/
