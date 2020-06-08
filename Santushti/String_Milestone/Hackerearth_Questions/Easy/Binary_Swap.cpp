#include <bits/stdc++.h>
using namespace std;

int main() {

    string a, b;

	cin>>a;

	cin>>b;

	multiset<int> as(a.begin(),a.end());
	multiset<int> bs(b.begin(),b.end());

	if(as.count(1) == bs.count(1)) {

		int k = 0;

        for(int i = 0; i < a.length(); ++i) {

			if(a[i] != b[i]) {
				
				k++;
			}
		}  
        if(k%2 == 0) {
			
			cout<<k/2;
		}
        else {
		
			cout<<"-1";
		}  
	}

	else {
		
		cout<<"-1";
	}
	return 0;
}
/*

SAMPLE INPUT
------------
1110
1101

SAMPLE OUTPUT
-------------
1

*/
