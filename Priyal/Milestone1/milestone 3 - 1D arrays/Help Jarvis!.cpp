#include<iostream>
#include <bits/stdc++.h>
using namespace std;

string train(int len, string &x){
	
	int num= stoi(x);
	int arr[len];

	for(int i=0;i<len;i++){
		arr[i] = num%10;
		num = num/10;
	}

	sort(arr, arr+len);
	int smallest= arr[0];
	for(int j=0;j<len;j++){
		if(arr[j] != smallest){
			return "NO";
		}
		smallest++;
	}

	return "YES";
}


int main(){

int t;
cin>>t;
string x;

while(t){

cin>>x;

int len = x.length();

cout<<train(len,x)<<"\n";

t--;
}

    return 0;
}
