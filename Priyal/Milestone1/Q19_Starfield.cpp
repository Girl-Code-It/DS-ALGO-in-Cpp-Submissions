#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void printPatt(int n)
{
    //write your code here
    int n_new = 2*n -1;
    
    for(int i=0;i<n_new;i++){
    	
    	if(i<n){
    		if(i%2 ==0){
    			for(int j=0;j<n_new;j++){
    				if(j%2==0 && (j<=i || j>=(n_new-1-i))){
    					cout<<"*";
					}else{
						cout<<" ";
					}
				}
				cout<<"\n";
			}
			else{
				for(int k=0;k<n_new;k++){
    				if(k%2!=0 && (k<=i || k>=(n_new-1-i))){
    					cout<<"*";
					}else{
						cout<<" ";
					}
				}
				cout<<"\n";
			}
		}
		else{
			if(i%2 ==0){
    			for(int m=0;m<n_new;m++){
    				if(m%2==0 && (m>=i || m<=(n_new-1-i))){
    					cout<<"*";
					}else{
						cout<<" ";
					}
				}
				cout<<"\n";
			}
			else{
				for(int p=0;p<n_new;p++){
    				if(p%2!=0 && (p>=i || p<=(n_new-1-i))){
    					cout<<"*";
					}else{
						cout<<" ";
					}
				}
				cout<<"\n";
			}
			
		}
    	
	}
    
    
}


int main(){

int n;
cin>>n;

printPatt(n);

    return 0;
}
