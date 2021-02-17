#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;

    cin>>n;

    int a[n], sum[n];

    for(int  i = 0; i < n; ++i) {

        cin>>a[i];
    }

    sort(a, a+n);

    for(int i = 0; i < n; ++i) {

        if(i) {

            sum[i] = a[i]+sum[i-1];
        }
        else {

            sum[i] = a[i];
        }
    }

    int q;

    cin>>q;

    while(q--) {

        int num;

        cin>>num;

        int low = 0, high = n-1;

        int ans;

        while(low <= high) {

            int mid = (low + high)/2;

            if(a[mid] <= num && (mid == n-1 || a[mid+1] > num)) {

                ans = mid;
                break;
            }
            else if(a[mid] <= num) {

                low = mid + 1;
            }
            else if(a[mid] > num) {

                high = mid - 1;
            }
        }
        cout<<ans+1<<" "<<sum[ans]<<"\n";
    }
    return 0;
}
