#include<bits/stdc++.h>
using namespace std;

int main() {
    
    string s1,s2;
    
    cin>>s1;
    cin>>s2;
    
    if(s2.length() > s1.length()) {
        
        cout<<"NO";
    }
    else {
        
        int flag = 1;
        
        int max = 0;

        for(int i = s2.length(); i >= 0; --i) {
            
            if(s1[i] != s2[i]) {
                
                flag = 0;

                int ans = abs(int(s2[i] - s1[i]));
                
                if(ans >= max){
                   
                   max = ans;
                }
                else {
                    
                    max = -1;
                    break;
                }           
            }
            else {
                if(!flag) {
                   
                   max = -1;
                    break;
                }
            }
        }

        if(max >= 0) {
           
            cout<<"YES";
        }

        else {
            
            cout<<"NO"; 
        }       
    }
    
    return 0;
}
/*

SAMPLE INPUT
------------
abaca
cdbda

SAMPLE OUTPUT
-------------
YES

*/
