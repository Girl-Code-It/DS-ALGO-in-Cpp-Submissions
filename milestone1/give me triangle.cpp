#include<iostream>
using namespace std;
void printPatt(int n)
{
     for(int i=1;i<=n;i++){
    	for(int j=1;j<i;j++)
    		cout<<" ";
    		for(int j=n;j>=i;j--)
    		cout<<"*";
	
		cout<<"\n";
	}

}
int main(){
	int n;
	cin>>n;
	printPatt(n);
	}
