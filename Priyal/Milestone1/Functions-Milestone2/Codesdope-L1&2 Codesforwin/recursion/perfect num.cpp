
#include <bits/stdc++.h>
using namespace std;

int perfectNum(int x){
	int sum= 1;
	
	for(int i=2;i<=x/2;i++){
		if(x%i == 0){
			sum+=i;
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
if(y == p && y!=1){
	cout<<y<<" ";
}

} 

    return 0;
}
