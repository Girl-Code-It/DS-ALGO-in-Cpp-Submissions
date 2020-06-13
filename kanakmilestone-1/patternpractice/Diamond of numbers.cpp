#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int i=0;i<n/2;i++)
	{   
	    for(int p=i;p<=n/2;p++)
	        cout<<" ";
	    for(int p=1;p<=2*i+1;p++)     
	        cout<<p;
	     cout<<""<<endl;      
	}
	for(int i=n/2;i>0;i--)
	{    for(int p=i;p<=n/2;p++)
	        cout<<" ";
	    for(int p=1;p<=2*i+1;p++)
	        cout<<p;
	    cout<<""<<endl;
	}
	return 0;
}
