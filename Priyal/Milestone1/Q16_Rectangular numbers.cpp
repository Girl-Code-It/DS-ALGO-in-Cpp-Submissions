#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void printPatt(int n)
{
    //write your code here
    int num=n, num2= 2;
    int n_new = 2*n -1;
    
    int numb[n_new];
    
	for(int p=0;p<n_new;p++){
    	numb[p] = n;
	}
    
    for(int i=0;i<n_new;i++){
    	
    	if(i<n){
    		for(int j=0;j<n_new;j++){
    			if(j>=i && j<=(n_new-1-i)){
    				numb[j] = num; 
					cout<<numb[j];
				}
				else{
//					numb.push_back();
					cout<<numb[j];
				}
			}
    		num--;
			cout<<"\n";
		}else{
			for(int k=0;k<n_new;k++){
				if(k>=(n_new-1-i) && k<=i){
					numb[k] = num2;
					cout<<numb[k];
				}else{
					cout<<numb[k];
				}
			}
			cout<<"\n"; num2++;
		}
		
	}
    
}


int main(){

int n;
cin>>n;

printPatt(n);

    return 0;
}
