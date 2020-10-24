#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void printPatt(int n)
{
    //write your code here
    for(int i=0;i<n;i++){
    	
    	if(i<=n/2){
    		for(int j=0;j<n;j++){
    			if(j<=(n/2 -i) || j>=(n/2 + i)){
    				cout<<"*";
				}else{
					cout<<" ";
				}
			}
			cout<<"\n";
		}
		else{
			for(int k=0;k<n;k++){
				if(k<=(n/2 - (n-1-i)) || k>=(n/2 + (n-1-i))){
					cout<<"*";
				}else{
					cout<<" ";
				}
			}
			cout<<"\n";
		}
    	
	}
    
}


int main(){

int n;
cin>>n;

printPatt(n);

    return 0;
}
