#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void chargeLeft(vector<char> v){
	int n = v.size();
	int i = n-1;
//	cout<<"\nI                  i= "<<i<<" n= "<<n<<"  v.size()= "<<v.size();
	while(i != 0 ){
//		cout<<"\nII    i= "<<i<<" n= "<<n<<"  v.size()= "<<v.size();
		if(v[i] == v[i-1]){
			v.erase(v.begin() + i);
			v.erase(v.begin() + i-1);
			n = v.size();
			i= i - 1; // i = i -(2) + (1)   { -2 b/c we popped 2 elements { +1 to shift an index right
		}
		else{
			i--;
		}
//		cout<<"\n";
//		for(int p=0;p<v.size();p++){
//		cout<<v[p];
//		}
	}
	
//	cout<<"\n\n";
	cout<<v.size()<<"\n";
	for(int p=0;p<v.size();p++){
		cout<<v[p];
	}
}



int main(){

int num;
cin>>num;
string str;
cin>>str;

vector<char> v;
for(int x=0;x<num;x++){
	v.push_back(str[x]);
}

chargeLeft(v);

    return 0;
}
