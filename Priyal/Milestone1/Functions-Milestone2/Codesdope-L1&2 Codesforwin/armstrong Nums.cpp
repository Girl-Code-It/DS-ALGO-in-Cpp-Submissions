#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void armstrongNum(int a,int b){
	int rmn, last_dig,len,sum=0;  string str;
	vector<int>armstr;
	
	for(int i=a;i<=b;i++){
		rmn = i; sum=0;
		str = to_string(i);
		len = str.length();  
		while(rmn!=0){
			last_dig= rmn%10;
			sum+=(pow(last_dig,len));
			rmn = rmn/10;
		}
		
		if(sum == i){
			armstr.push_back(i);
		}
	}
	
	for(int p=0;p<armstr.size();p++){
		cout<<armstr[p]<<" ";
	}
	
}



int main(){

int a,b; cin>>a>>b;
armstrongNum(a,b);

    return 0;
}
