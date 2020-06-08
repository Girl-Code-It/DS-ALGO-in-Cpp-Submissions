#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;

    cin>>t;

    while(t--) {

        string s;
        
        cin>>s;

        int front = s.length()/2;
        int back = front;

        char a[s.length()];
        
        if(s.length()%2) {

            for(int i = 0; i < s.length(); ++i) {

                if(i == 0) {
                   
                    a[front] = s[i];
                }
                else if(i%2) {
                    
                    front--;
                    a[front] = s[i];
                }
                else {
                   
                    back++;
                    a[back] = s[i];
                }
            }
        }
        else {
            for(int i = 0; i < s.length(); ++i) {

                if(i%2) {

                    a[back] = s[i];
                    back++;
                }
                else {
                    
                    front--;
                    a[front] = s[i];
                }
            }
        }

        for(int i = 0; i < s.length(); ++i) {

            cout<<a[i];
        }
        cout<<"\n";
    }

    return 0;
}
/*

SAMPLE INPUT
------------
2
wrien
reen

SAMPLE OUTPUT
-------------
erwin
eren

*/
