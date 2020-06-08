#include <bits/stdc++.h>
using namespace std;

int main() {

	string s;

	cin>>s;

    unordered_map<char, int> freq;

	vector<char> ans;

	for(int i = 0; i < s.length(); ++i) {

		freq[s[i]]++;

		if(freq[s[i]] == 1) {
            
            ans.push_back(s[i]);
        }
	}

	for(int i = 0; i < ans.size(); ++i) {
     
        cout<<ans[i];
    }

    return 0;
}
/*

SAMPLE INPUT
------------
iloveprogramming

SAMPLE OUTPUT
-------------
iloveprgamn

*/
