#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void printPatt(int n)
{
    //write your code here
	int num;
	for(int i=0;i<=n;i++){
		num =i;
		for(int j=0;j<(2*n +1);j++){
			if(j>=(n-i) && j<=(n-i + 2*i)){
				if(j==n){
					cout<<0;
				}else if(j<n){
					cout<<num;
					num--;
				}else{
					num++;
					cout<<num;
				}
				
			}
			else{
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
