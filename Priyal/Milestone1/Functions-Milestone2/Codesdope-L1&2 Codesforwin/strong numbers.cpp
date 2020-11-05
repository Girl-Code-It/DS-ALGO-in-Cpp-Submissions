#include <bits/stdc++.h>
using namespace std;

int factorial(int f){
	int fac=1;
	for(int i=2;i<=f;i++){
		fac*=i;
	}
	
	return fac;
}

void strongNum(int a, int b){
	vector<int>strng;
	int fac =1, last_dig, rmn, sum=0;
	
	for(int i=a;i<=b;i++){
		rmn=i; sum =0;
		while(rmn !=0){
			last_dig = rmn%10;
			sum+=(factorial(last_dig));
			rmn = rmn/10;
		}
		if( sum == i){
			strng.push_back(i);
		}
		
	}
	
	for(int p=0;p<strng.size();p++){
		cout<<strng[p]<<" ";
	}
	
}



int main(){

int n;
cin>>n;
int k;
cin>>k;
strongNum(n,k);

    return 0;
}
