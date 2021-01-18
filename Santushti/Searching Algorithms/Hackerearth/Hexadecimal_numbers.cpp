#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;

    return gcd(b, a % b);    
}
int func(int num) {

    int ans = 0;

    while(num != 0) {

        int rem = num%16;
        ans += rem;
        num /= 16;
    }

    return ans;
}
int main() {

    int t;

    cin>>t;

    while(t--) {

        int l, r;

        cin>>l>>r;

        int ans = 0;

        for(int i = l; i <= r; ++i) {

            int f = func(i);

            int num = gcd(f, i);

            if(num > 1) {

                ans++;
            }
        }

        cout<<ans<<"\n";
    }

    return 0;
}
