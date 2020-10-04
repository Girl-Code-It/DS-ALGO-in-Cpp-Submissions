#include<iostream>
using namespace std;
   void printPatt(int n)
{
    for(int i=1;i<=n;i++){
    	for(int k=2;k<=2*(i-1);k+=2)
    	cout<<" ";
        for(int j=i;j<=(2*i-1);j++)
        cout<<j;
        for(int j=(2*i-2);j>=i;j--)
          cout<<j;
        cout<<"\n";
        //for(int k=n;k>n-i;k--)
    	//cout<<"\n";
    }
}
int main()
{
	int n;
	cin>>n;
	printPatt(n);
	return 0;
}
