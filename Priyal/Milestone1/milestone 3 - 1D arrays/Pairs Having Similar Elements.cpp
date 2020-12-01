#include<iostream>
#include <bits/stdc++.h>
using namespace std;

long long int similarPair(int arr[], int n){
	sort(arr,arr+n);
	long long int same =0, count =0,total =0;
	
	for(int i=0;i<n;i++){
		if( arr[i+1]-arr[i]== 1 ){
			count++;
			
		}
		else if(arr[i]==arr[i+1]){
			same++;
		}
		else{
			if(same>=1 & count>0){
				count = count + same;
			}
			total = total + (count+1)*(count+1-1)/2 ;   //combination formula nC2 (n= count +1)
			same =0; count =0;
		}
	}
	return total;
}


int main(){

int n;
cin>>n;
int arr[n];
for(int p=0;p<n;p++){
	cin>>arr[p];
}

cout<<similarPair(arr,n);
    return 0;
}
