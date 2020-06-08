#include <bits/stdc++.h>
using namespace std;

int main() {

    int tc;

    cin>>tc;

    while(tc--) {

        string s;

        cin>>s;

        vector<char> arr;
        vector<char> temp;

        for(int i = 0;i < s.length(); ++i) {

            if(s[i] =='a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {

                arr.push_back(s[i]);
                temp.push_back(s[i]);
            }
        }
        int start = 0, end = 0;

        sort(temp.begin(), temp.end());

        for(int i = 0; i < arr.size(); ++i) {

            if(temp[i] == arr[i]) {

                start++;
            }
            if(temp[i] == arr[arr.size() -i -1]) {

                end++;
            }
        }
        if(start == arr.size()) {
            
            cout<<"Good\n";
        }
        else if(end == arr.size()) {
            
            cout<<"Worst\n";
        }
        else {
            
            cout<<"Bad\n";
        }
    }
    return 0;
}
/*

SAMPLE INPUT
------------
3
discount
weak
goalkeeper

SAMPLE OUTPUT
-------------
Good
Worst
Bad

*/
