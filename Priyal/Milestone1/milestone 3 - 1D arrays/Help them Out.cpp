#include<iostream>
#include <bits/stdc++.h>
using namespace std;


long long int stepsnum(int n, int arr[]){
	long long int steps=0;
	sort(arr, arr+n);
	
	while(arr[n-1] > 0){
		for(int i=0;i<n;i++){
			if(arr[i] %2 != 0){
				arr[i]--;
				steps++;
			}

			arr[i]/=2;
			// if(arr[i] == 0){
			// 	zero_num++;		
			// }
		}

		// if(zero_num == n){
		// 	break;
		// }
		steps++;
	}

	return steps-1;
}


int main(){

int n;
cin>>n;
int arr[n];
for(int p=0;p<n;p++){
	cin>>arr[p];
}
cout<<stepsnum(n, arr);

    return 0;
}
