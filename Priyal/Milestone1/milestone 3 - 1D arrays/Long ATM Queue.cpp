#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int minPeople(int n, int arr[]){
	int count=1;

	for(int i=1;i<n;i++){
		if(arr[i-1] > arr[i]){
			count++;
		}
	}

	return count;
}

int main(){

int n;
cin>>n;
int arr[n];
for(int p=0;p<n;p++){
	cin>>arr[p];
}

cout<<minPeople(n,arr);

    return 0;
}
