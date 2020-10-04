#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<i;j++)
		cout<<" ";
		cout<<i;
		for( int j=1;j<=2*(n-i);j++)
			cout<<" ";
			if(i!=n)
			cout<<i;
		cout<<"\n";
	}
	for(int i=n-1;i>=1;i--){
		for(int j=i;j>1;j--)
		cout<<" ";
		cout<<i;
		for( int j=1;j<=2*(n-i);j++)
			cout<<" ";
			cout<<i;
		cout<<"\n";
	}
}
