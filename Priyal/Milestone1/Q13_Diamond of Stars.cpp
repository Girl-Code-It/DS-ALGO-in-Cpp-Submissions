#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void printPatt(int n)
{
    //write your code here
    if(n%2 == 0){
    	n = n+1;
	}
    
    for(int i=0;i<n;i++){
    	if(i<=n/2){
    		for(int j=0;j<n;j++){
	    		if(j>=(n/2-i) && j<=(n/2-i + 2*i)){
	    			cout<<"*";
				}else{
					cout<<" ";
				}
			}
		}else{
			for(int k=0;k<n;k++){
				if(k>=(i-n/2) && k<=(i - n/2 + 2*(n-1-i))){
	    			cout<<"*";
				}else{
					cout<<" ";
				}
			}
		}
		cout<<"\n";
	}
    
}


int main(){

int n;
cin>>n;

printPatt(n);

    return 0;
}
