#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int num=1;
	int k;
	if(n%2==0)
	    k=n/2;
	else
	    k=n/2+1;
	for(int i=0;i<k;i++)
	{   num=n*2*i+1; 
	    for(int p=0;p<n;p++)     
	        cout<<num++<<" ";

	    cout<<""<<endl;      
	}
	    if(n%2==1)
        k=2*k-3;
        else
        k=2*k-1;
	for(int i=0;i<n/2;i++)
	  {    num=n*(k-2*i)+1;
	     for(int p=0;p<n;p++)     
	        cout<<num++<<" ";


	     cout<<""<<endl;      
	}

	return 0;
}
