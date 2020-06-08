#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    
    cin>>t;

    if(t >= 1 && t <= 10) {
        
        while(t--) {
            
            string s;
            
            cin>>s;
        
            int l = s.size();
            int flag = 1;

            if(l >= 1 && l <= 100){
                
                for(int i = 0; i < l; ++i) {
                    
                    if(isalpha(s[i])) {
                        
                        flag=0;
                        break;
                    }
                }
                
                if(flag==0) {
                
                    int k = 0, q = 0;
            
                    for(int i = 0; i < l; ++i) {
                    
                        if(islower(s[i])) {
                        
                            k++;
                        }
                        if(isupper(s[i])) {
                    
                            q++;
                        }
                    }
            
                    cout<<min(k,q)<<"\n";
                }
       
                else {
                    
                    cout<<"Invalid Input\n";
                }
            }
            else {
            
                cout<<"Invalid Input\n";
            }    
        }
    }
    else {
     
        cout<<"Invalid Test";
    }
    return 0;
}
/*

SAMPLE INPUT
------------
3
abcEfg
!@6#2
123A

SAMPLE OUTPUT
-------------
1
Invalid Input
0

*/
