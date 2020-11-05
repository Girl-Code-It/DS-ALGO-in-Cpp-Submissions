#include<iostream>
#include <bits/stdc++.h>
using namespace std;

string primenum(int n){
	if(n%2 == 0 & n!=2){
		return "Not a Prime Number!";
	}
	else{
		for(int i=3;i<n;i+=2){
			if(n%i == 0)
				return "Not a Prime Number!";
		}
	}
	return "Prime Number!";
}



int main(){

int n;
cin>>n;

cout<<primenum(n);

    return 0;
}
