
#include <bits/stdc++.h>
using namespace std;

int i=2;
	
int primeFac(int x){
	while(x%i != 0 && x!=1){
		if(i==2){
			i++;
		}else{
			i+=2;
		}
	}
	
	if(x == 1){
		return 1;
	}else{
		if(x%i == 0){
			cout<<i<<" ";
			return primeFac(x/i);
		} 
		
	}
	
	
}


int main(){

int n;
cin>>n;
primeFac(n);

    return 0;
}
