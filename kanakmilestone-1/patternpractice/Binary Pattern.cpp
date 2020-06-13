#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,k;
	cin>>n;
	for(int i=0;i<n;i++)
	{   
	    if(i%2==0)
	    k=1;
	    else 
	    k=0;
	    for(int j=0;j<n-i;j++)
	        cout<<k;
	    cout<<""<<endl;
	}
	return 0;
}
