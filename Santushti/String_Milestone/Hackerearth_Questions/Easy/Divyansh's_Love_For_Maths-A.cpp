#include <bits/stdc++.h>
using namespace std;

int main() {

    long long int n;

    cin>>n;

    string word = "";

    n--;

    while(n >= 0) {

        if(n%3 == 0) {
            
            word += '2';
        }
        if(n%3 == 1) {

            word += '3';
        }
        if(n%3 == 2) {
            
            word += '5';
        }

        n = (n/3)-1;
    }

    reverse(word.begin(), word.end());
    
    cout<<word;
    
    return 0;
}
/*

SAMPLE INPUT
------------
999

SAMPLE OUTPUT
-------------
535335

*/
