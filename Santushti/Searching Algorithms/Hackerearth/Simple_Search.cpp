#include<bits/stdc++.h>
using namespace std;

int main() {
    
    long long int n;

    cin>>n;

    long long int a[n];

    for(int i = 0; i < n; ++i) {

        cin>>a[i];
    }

    int k;

    cin>>k;

    int ans;

    for(int i = 0; i < n; ++i) {

        if(a[i] == k) {

            ans = i;
            break;
        }
    }

    cout<<ans;

    return 0;
}
