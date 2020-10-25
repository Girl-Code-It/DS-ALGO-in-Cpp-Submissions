#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void printPatt(int n)
{
    //write your code here
	int num;
   	for(int i=n;i>0;i--){
   		num =i;
   		for(int j=0;j<n;j++){
			if(num>n){
				cout<<n;
			}else{
				cout<<num;
				num++;
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
