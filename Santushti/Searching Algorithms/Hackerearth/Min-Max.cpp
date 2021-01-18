#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;

    cin>>n;

    int arr[n];

    long long int max = INT_MIN, min = INT_MAX, sum = 0;

    for(int i = 0; i < n; ++i) {

        cin>>arr[i];

        if(arr[i] > max) {

            max = arr[i];
        }
        if(arr[i] < min) {

            min = arr[i];
        }

        sum += arr[i];
    }

    cout<<sum-max<<" "<<sum-min;

    return 0;
}
