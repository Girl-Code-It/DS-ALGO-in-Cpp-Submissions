#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int num_segments(int n, int arr[]){
	int count =0;
	int i=0,j=1;
	int inc=0,dec=0;

	while(i<n && j<n){
		if(arr[i] <= arr[j]){
			inc++; count++;
			i++; j++;
		}else{
			count--;
			if(count<0){
				count++;
			}else{dec++;}
			i++; j++;
		}

	}

	
return min(inc,dec);
}


int main(){

int t; cin>>t;
int n;

while(t){

cin>>n;
int arr[n];
for(int p=0;p<n;p++){
	cin>>arr[p];
}
cout<<num_segments(n,arr)<<"\n";

t--;
}

    return 0;
}
