#include <bits/stdc++.h>
using namespace std;

int main() {

    long long int t;

    cin>>t;
    cin.ignore();

    while(t--) {

        int n;

        cin>>n;

        string s;

        cin>>s;

        multiset<long long int> a(s.begin(), s.end());

        long long int cnt = a.count('1');

        long long int ans = (cnt * (cnt -1))/2;

        cout<<ans<<"\n";
    }

    return 0;
}
/*

SAMPLE INPUT
------------
2
4
1111
5
01101

SAMPLE OUTPUT
-------------
6
3

*/
