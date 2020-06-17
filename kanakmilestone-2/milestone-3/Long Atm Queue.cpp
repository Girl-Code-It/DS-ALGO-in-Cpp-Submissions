

#include <iostream>

using namespace std;

int main() {
	long int num,i,count;
	cin >> num;	
	long int a[num];
	for(i=0;i<num;i++)
	cin>>a[i];
	count=0;
	for(i=1;i<num;i++)
	{
		if(a[i]<a[i-1])
		count++;
	}	
	count++;		
	cout<<count<<endl;
	return 0;
	}			
