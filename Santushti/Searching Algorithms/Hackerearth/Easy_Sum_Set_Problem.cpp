#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int n;

    cin>>n;

    int a[n];

    for(int i = 0; i < n; ++i) {

        cin>>a[i];
    }

    int m;

    cin>>m;

    int c[m];

    vector<int> ans;

    unordered_map<int, int> mp;

    for(int i = 0; i < m; ++i) {

        cin>>c[i];

        for(int j = 0; j < n; ++j) {

            int val = c[i] - a[j];

            if(val > 0) {

                mp[val]++;
            }
            if(mp[val] == n) {

                ans.push_back(val);
            }
        }
    }    

    for(int i = 0; i < ans.size(); ++i) {

        cout<<ans[i]<<" ";
    }

    return 0;
}
