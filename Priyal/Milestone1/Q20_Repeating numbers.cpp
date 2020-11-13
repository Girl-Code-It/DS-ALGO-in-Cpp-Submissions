#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void printPatt(int n)
{
    //write your code here
    int count=1,num=1;
    
    for(int i=0;i<n;i++){
    	for(int j=0;j<count;j++){
    		cout<<num;
    		if(num<9)
    			num++;
    		else
    			num = 1;
		}
		cout<<"\n";
    	count*=2;
	}
    
}


int main(){

int n;
cin>>n;

printPatt(n);

    return 0;
}
