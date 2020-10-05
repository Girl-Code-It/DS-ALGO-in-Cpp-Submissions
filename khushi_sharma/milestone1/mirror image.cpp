#include<iostream>
using namespace std;
void printPatt(int n)
{
    for(int i=0;i<n+1;i++){
	for(int k=n;k>i;k--)
	cout<<" ";
	for(int j=i;j>=0;j--)
		cout<<j;
		for(int j=1;j<=i;j++)
		cout<<j;
	cout<<"\n";
}
    
}
int main(){
	int n;
	cin>>n;
	printPatt(n);
	}
