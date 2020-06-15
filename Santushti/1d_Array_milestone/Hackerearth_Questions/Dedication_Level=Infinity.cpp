#include <bits/stdc++.h>
using namespace std;

int main() {

    long long n;
    
    cin>>n;
    
    string str[n], st1[n];
    
    long long t[n], t1[n];
    
    for(int i = 0; i < n; ++i) {
        
        cin>>str[i]>>t[i];
    }
    
    // Approach 1

    for(int i = 1; i < n; ++i) {

        for(int j = 0; j < n-i; ++j) {

            if(t[j] > t[j+1]) {

                t1[j] = t[j];
                t[j] = t[j+1];
                t[j+1] = t1[j];
               
                st1[j] = str[j];
                str[j] = str[j+1];
                str[j+1] = st1[j];
            }
        }
    }
 
    for(int i = n-1; i > n-4; --i) {
        
        cout<<str[i]<<"\n";
    }
    
    
    // Approach 2 
    /*
    unordered_map<int, string> mp;

    for(int i = 0; i < n; ++i) {

        mp[t[i]] = str[i];
    }
    
    sort(t, t+n, greater<int>());

    for(int i = 0; i < 3; ++i) {

        cout<<mp[t[i]]<<"\n";
    }
    */
    return 0;
}
/*

SAMPLE INPUT
------------
7
Darshan 78
Harshad 90
Jaimin 87
Nirav 88
Hardik 1
Fenil 70
Lovlin 5

SAMPLE OUTPUT
-------------
Harshad
Nirav
Jaimin

*/
