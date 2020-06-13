#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int i=0;i<n/2;i++)
	{   
	    for(int p=0;p<=i;p++)
	        cout<<"*";
	   cout<<""<<endl;
	}
	for(int i=n/2;i<n;i++)
	{
	    for(int p=0;p<n-i;p++)
	        cout<<"*";
	    cout<<""<<endl;
	}
	return 0;
}
