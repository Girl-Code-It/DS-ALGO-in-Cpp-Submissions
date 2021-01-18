#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;

    cin>>t;

    while(t--) {

        string s;

        cin>>s;

        int fir = 0, sec = 0;

        for(int i = 0; i < s.length(); ++i) {

            if(s[i] == 'S') {

                if(s[i+1] == 'U') {

                    if(s[i+2] == 'V') {

                        if(s[i+3] == 'O') {

                            fir++;

                            if(s[i+4] == 'J') {

                                if(s[i+5] == 'I') {

                                    if(s[i+6] == 'T') {

                                        sec++;
                                        fir--;
                                    }
                                }
                            }

                        }
                    }
                }
            }
        }

        cout<<"SUVO = "<<fir<<", SUVOJIT = "<<sec<<"\n";
    }

    return 0;
}
