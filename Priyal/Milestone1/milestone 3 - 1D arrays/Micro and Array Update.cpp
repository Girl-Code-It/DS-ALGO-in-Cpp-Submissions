#include<iostream>
#include <bits/stdc++.h>
using namespace std;



int main(){

int n,t,k;
cin>>t;

while(t){
	
	cin>>n>>k;
	int arr[n];
	int smallest= INT_MAX;
	for(int p=0;p<n;p++){
		cin>>arr[p];
		smallest = min(smallest, arr[p]);
	}

	if(k>smallest)
		cout<<k-smallest<<"\n";
	else
		cout<<"0"<<"\n";
	t--;
}


    return 0;
}
