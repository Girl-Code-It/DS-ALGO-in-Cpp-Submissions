#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	char ch='A';
	char k;

	for(int i=0;i<n;i++)
	{   ch='A';
	    for(int p=0;p<i;p++)
	        cout<<" ";
	    for(int j=0;j<(n-i);j++)
	    {     k=ch+j;
	        cout<<k;
	    }
	    ch=k;
	    for(int j=0;j<(n-i);j++)
	    {     k=ch-j;
	        cout<<k;
	    }
	    cout<<""<<endl;
	}
	return 0;
}
