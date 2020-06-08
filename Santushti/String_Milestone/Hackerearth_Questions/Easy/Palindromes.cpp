#include<bits/stdc++.h>
using namespace std;

int main() {

    string s;
    
    cin>>s;
    
    int l = s.size();
    int flag = 1, max = 0;
    
    while(l != 1) {

        for(int i = 0; i < l; ++i) {

            if(s[i] != s[l-i-1]) {

                flag = 0;
                break;
            }
        }
        
        if(flag == 0){
            if(max < l) {
                
                max=l;
            }
        }
        l--;
    }
    cout<<max;
    
    return 0;
}
/*

SAMPLE INPUT
------------
aba

SAMPLE OUTPUT
-------------
2

*/
