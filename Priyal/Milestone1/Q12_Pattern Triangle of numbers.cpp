#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void printPatt(int n)
{
    //write your code here
    int num,num2;
    
    for(int i=0;i<n;i++){
    	num = i+1;
    	for(int j=0;j<(n*2-1);j++){
    		if(j>=(2*n-2-2*i)){
    			if(num< 2*(i+1)){
    				cout<<num; num++;
				}else{
					if(num == 2*(i+1)){
						num2= num -2;
						num = n*2+1;
					}
					cout<<num2;
					num2--; 
				}
			}else{
				cout<<" ";
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
