#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;

    cin>>t;

    while(t--) {

        int n;

        cin>>n;

        string s;

        cin>>s;

        int flag = 1;

        vector<char> ans;

        for(int i = 0; i < n; ++i) {
            
            if(s[i] == 'A') {
                
                ans.push_back('T');
            }
            if(s[i] == 'T') {
                
                ans.push_back('A');
            }
            if(s[i] == 'G') {
                
                ans.push_back('C');
            }
            if(s[i] == 'C') {
                
                ans.push_back('G');
            }
            if(s[i] == 'U') {

                flag = 0;
                break;
            }
        }
         
         if(flag) {

             for(int i = 0; i < ans.size(); ++i) {

                 cout<<ans[i];
             }
         }

         else {

             cout<<"Error RNA nucleobases found!";
         }
          
          cout<<"\n";
    }

    return 0;
}
/*

SAMPLE INPUT
------------
3
2
AG
4
ATGC
6
UGCACT

SAMPLE OUTPUT
-------------
TC
TACG
Error RNA nucleobases found!

*/
