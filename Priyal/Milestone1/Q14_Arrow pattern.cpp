#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void printPatt(int n)
{
    //write your code here
    
    for(int i=0;i<n;i++){
    	if(i<=n/2){
    		for(int j=0;j<=2*i;j++){
	    		if(j>=i){
	    			cout<<"*"<<" ";
				}else{
					cout<<" ";
				}
			}
		}else{
			for(int k=0;k<=2*(n-1-i);k++){
				if(k>=(n-1-i) ){
	    			cout<<"*"<<" ";
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
