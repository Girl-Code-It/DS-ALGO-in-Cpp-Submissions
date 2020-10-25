#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void printPatt(int n)
{
    //write your code here
    int flag = 1;
    int num = 1;
    for(int i=1;i<=n;i++){
    	
    	for(int j=1;j<=i;j++){
    		if(flag){
    			cout<<num<<" ";
    			num++;
			}else{
				cout<<num+i-j<<" ";	
			}
		}
		if(!flag)
			num = num + i;
		flag = !flag;
		cout<<"\n";
	}
}


int main(){

int n;
cin>>n;

printPatt(n);

    return 0;
}
