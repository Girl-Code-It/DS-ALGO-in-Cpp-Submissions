#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void printPatt(int n)
{
    //write your code here
    
    int num=1,num2=n*n - 2*n + 1;
    
    for(int i=0;i<n;i++){
    	if(i<n/2){
    		for(int j=0;j<n;j++){
    			cout<<num<<"\t";
				num++;
 		    }
 		    num = num + n; 
 		    cout<<"\n";
		}else if(i == n/2){
			num = n*n - n +1;
			for(int p=0;p<n;p++){
				cout<<num<<"\t"; num++;
			}
			cout<<"\n";
			if(n%2 == 0){
				num= n*n - 3*n +1;
			}else{
				num = n*n - 2*n + 1;
			}
		}
		else{
			for(int k=0;k<n;k++){
				cout<<num<<"\t";
				num++;
			}
			cout<<"\n";
			num--;
			if(n%2 == 0){
				num= num - 3*n +1;
			}else{
				num = num - 3*n + 1;
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
