#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	char ch='A';
	char k;
	for(int i=0;i<n;i++)
	{   
	    k=ch+i;
	    for(int j=0;j<=i;j++)
	    {
	        cout<<k;
	    }
	    cout<<""<<endl;
	}
	return 0;
}
