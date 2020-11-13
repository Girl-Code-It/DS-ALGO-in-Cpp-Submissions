//Write a program to print the sum of two numbers entered by user by defining your own function.
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int sum(int x,int y){
	return x+y;
}


int main(){

int n,m;
cin>>n>>m;
cout<<sum(m,n);

    return 0;
}
