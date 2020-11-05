//Write a program to print the factorial of a number by defining a function named 'Factorial'.
//Factorial of any number n is represented by n! and is equal to 1*2*3*....*(n-1)*n. E.g.-
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
	int fac =1;
	
		for(int i=2;i<=n;i++){
			fac*=i;
		}
	
	return fac;
}


int main(){

int n;
cin>>n;

cout<<factorial(n);

    return 0;
}
