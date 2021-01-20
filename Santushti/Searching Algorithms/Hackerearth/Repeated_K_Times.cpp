#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;

    cin>>n;

    int a[n];

    unordered_map<int, int> mp;

    for(int i = 0; i < n; ++i) {

        cin>>a[i];

        mp[a[i]]++;
    }

    int k;

    cin>>k;

    sort(a, a+n);

    int ans;
    
    for(int i = 0; i < n; i += mp[a[i]]) {

        if(mp[a[i]] == k) {

            ans = a[i];
            break;
        }
    }

    cout<<ans;

    return 0;
}
