
#include <bits/stdc++.h>
using namespace std;

int sum= 1;

int perfectNum(int x){
	
	while(x%2 ==0){
		sum+=2;
		x = x/2;
	}	
	
	for(int i=3;i<=sqrt(x);i+=2){
		while(x%i == 0){
			sum+=i;
			x= x/i;
		}
	}
	
	return sum;
}



int main(){

int a,b; cin>>a>>b;

for(int p=a;p<=b;p++){
//int n;
//cin>>n;
int y= perfectNum(p);
if(y == sum){
	cout<<y" ";
}

} 

    return 0;
}
