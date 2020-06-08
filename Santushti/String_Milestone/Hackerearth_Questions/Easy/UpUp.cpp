#include<bits/stdc++.h>
using namespace std;
int main() {
   
    string s;
    
    getline(cin,s);     
    
    int l = s.size();
    
    if(islower(s[0])) {
     
        s[0] = toupper(s[0]);
    }   
    for(int i = 0; i < l; ++i) {

       if(s[i] == ' ') {
           
           if(islower(s[i+1])) {
               
               s[i+1] = s[i+1]-32;
           }
       }
    }

    cout<<s;
    
    return 0;
}
/*

SAMPLE INPUT
------------
Wish you were here

SAMPLE OUTPUT
-------------
Wish You Were Here

*/
