
#include <iostream>

using namespace std;

int main() {
	int s;
	int n,r;
	cin>>s;
	long long int a,max,count;

	while(s--)
	{	count=0;
		cin>>n>>r;
		cin>>a;
		max=a;
		count++;
		for(int i=1;i<n;i++)
		{
			cin>>a;
			if(a>max)
			{
				max=a;
				count++;
			}
		}
		cout<<count*r<<endl;
	}									// Reading input from 
return 0;
}
