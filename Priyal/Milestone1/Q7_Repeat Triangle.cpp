#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void printPatt(int n)
{
    //write your code here
    int num = 65 + n -1;
    for(int i=n;i>0;i--){
    	
    	for(int j=0;j<2*n;j++){
    		if(j>=n-i && j< n-i+2*i){
    			if(j< n){
    				cout<<char(num- n + 1);
    				num++;
				}else{
					num--;
					cout<<char(num - n +1);
				}
    			
			}else{
				cout<<" ";
			}
		}
		num = 65+n-1;
		cout<<"\n";
	}
}


int main(){

int n;
cin>>n;

printPatt(n);

    return 0;
}
