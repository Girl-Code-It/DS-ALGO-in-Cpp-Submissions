#include<iostream>
#include <bits/stdc++.h>
using namespace std;

string checkPolygon(int arr[],int n,int sum){
	
	for(int i=0;i<n;i++){
//		cout<<"\n  arr[i]= "<<arr[i]<<" sum-arr[i] ="<<sum-arr[i];
		if(arr[i] >= (sum - arr[i]) ){           // a side should always be less than the sum of all remaining sides
			return "No";
		}
	}
	
	return "Yes";
}


int main(){

int t;
cin>>t;

int n,sum=0;

while(t){
	
	cin>>n;
	int arr[n];
	sum = 0;
	
	for(int p=0;p<n;p++){
		cin>>arr[p];
		sum+=arr[p];
	}
	
	cout<<checkPolygon(arr,n,sum)<<"\n";
		
t--;
}

    return 0;
}
