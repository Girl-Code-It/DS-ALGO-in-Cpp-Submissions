#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void printPatt(int n)
{
    //write your code here
    int num = 65 + n -1;
    for(int i=1;i<=n;i++){
    	for(int j=i;j>0;j--){
    		cout<<char(num-j+1);
		}
		cout<<"\n";
	}
}


int main(){

int n;
cin>>n;
//int arr[n];
//for(int p=0;p<n;p++){
//	cin>>arr[p];
//}
printPatt(n);

    return 0;
}
