#include<iostream>
#include <bits/stdc++.h>
using namespace std;


int table(int num){
	if(num == 0){
		return 1;
	}else{
		return 15*table(num-1);
	}
}


int main(){

int n,num=10;
//cin>>n;

cout<<table(num);

    return 0;
}
