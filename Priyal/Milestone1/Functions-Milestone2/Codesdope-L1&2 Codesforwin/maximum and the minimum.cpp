//Define two functions to print the maximum and the minimum number respectively among three numbers entered by user.
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int minimum(int a, int b, int c){
	if(a<b){
		if(a<c)
			return a;
		else
			return c;
	}else{
		if(b<c)
			return b;
		else
			return c;
	}
}

int maximum(int a, int b, int c){
	if(a<b){
		if(c<b)
			return b;
		else
			return c;
	}else{
		if(c<a)
			return a;
		else
			return c;
	}
}

int main(){

int a,b,c;
cin>>a>>b>>c;
cout<<"minimum = "<<minimum(a,b,c);
cout<<"\nmaximum = "<<maximum(a,b,c);
    return 0;
}
