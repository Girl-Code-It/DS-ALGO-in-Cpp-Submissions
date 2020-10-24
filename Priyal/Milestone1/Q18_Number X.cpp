#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void printPatt(int n)
{
    //write your code here
    int n_new = 2*n -1;
    int num =1,num2=n-1;
    
    for(int i=0;i<n_new;i++){
    	
    	if(i<n){
    		for(int j=0;j<n_new;j++){
    			if(j==(i) || j==(n_new-1- i)){
    				cout<<num;
				}else{
					cout<<" ";
				}
			}
			num++;
			cout<<"\n";
		}
		else{
			for(int k=0;k<n_new;k++){
				if(k==(n_new-1-i) || k==i){
					cout<<num2;
				}else{
					cout<<" ";
				}
			}
			num2--;
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
