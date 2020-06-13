#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{   
	    for(int p=0;p<2*n-2*(i+1);p++)
	        cout<<" ";
	    for(int p=0;p<i;p++)     
	        cout<<i+1+p;
	        int k=2*i+1;
	     for(int p=0;p<=i;p++)     
	        cout<<k--;   
	     cout<<""<<endl;      
	}
	
	return 0;
}
