#include <bits/stdc++.h>
using namespace std;

int main() {

    long long int t;

    cin>>t;

    while(t--) {
        
        string s;

        cin>>s;

        multiset<char> a(s.begin(), s.end());

        long long int ans = min(a.count('{'), a.count('}')) + min(a.count('('), a.count(')')) + min(a.count('['), a.count(']'));

        cout<<ans*2<<"\n";
    }

    return 0;
}
/*

SAMPLE INPUT
------------
5
(){}()[]
))[]]((
{{{{{{{}
[]{}]
{}}

SAMPLE OUTPUT
-------------
8
6
2
4
2

*/
