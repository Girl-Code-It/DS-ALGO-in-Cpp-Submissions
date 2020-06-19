
#include <iostream>

using namespace std;

int main() {
	long int n;
	long long int x,a,count;
	cin>>n>>x;
	cin>>a;
	int flag=1;
	if(a<=x)
	count++;
	else
	flag=0;
	n--;
	while(n--)	
	{
		cin>>a;
		if(a<=x)
		count++;
		else{
			if(flag)
			flag=0;
			else
			goto p;
		}
	}	
	p:
	cout<<count<<endl;	
	return 0;
	}				
