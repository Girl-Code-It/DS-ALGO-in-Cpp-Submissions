#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;

    cin>>n;

    int a[n], sum[n];

    for(int i = 0; i < n; ++i) {

        cin>>a[i];

        if(i >= 1)
        sum[i] = a[i]+sum[i-1];

        else {

            sum[0] = a[0];
        }
    }

    int q;

    cin>>q;

    while(q--) {

        int target;

        cin>>target;

        int ans = -1;

        for(int i = 0; i < n; ++i) {

            if(sum[i] >= target) {

                ans = i+1;
                break;
            }
        }

        cout<<ans<<"\n";
    }
    return 0;
}
