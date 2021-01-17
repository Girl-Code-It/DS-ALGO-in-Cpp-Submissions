#include <bits/stdc++.h>
using namespace std;

int main(){

    long long int n;

    cin>>n;

    long long int a[n];

    long long int count = 0, sum = 0;

    for(int i = 0; i < n; ++i){
        
        cin>>a[i];

        if(a[i] >= 0)
        {
            sum += a[i];
            ++count;
        }
    }

    if(count == 0) {
        
        sort(a, a+n);
        count++;
        sum += a[n-1];
    }

    cout<<sum<<" "<<count;

    return 0;
}
