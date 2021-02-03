#include<bits/stdc++.h>
using namespace std;

int main() {

    int n, t;

    cin>>n>>t;

    int a[n];

    for(int i = 0; i < n; ++i) {

        cin>>a[i];
    }

    sort(a, a+n);
    
    while(t--) {

        int x;

        cin>>x;

        int ans = 0;
        
        int low = 0, high = n-1;

        while(low <= high) {

            int mid = (high + low)/2;

            if(a[mid] == x) {

                ans = 1;
                break;
            }
            else if(a[mid] < x) {

                low = mid + 1;
            }
            else {

                high = mid - 1;
            }
        }

        if(ans) {

            cout<<"YES\n";
        }
        else {

            cout<<"NO\n";
        }
    }
    return 0;
}
