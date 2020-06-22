
#include <iostream>

using namespace std;

int main() {
	long int num=0,j=0;
	cin >> num;	
	int a[num],b[num];
	for(long int i=0;i<num;i++)
	cin>>a[i];
	int max=-1;
	for(long int i=num-1;i>=0;i--)
	{
		if(a[i]>=max)
		{
			b[j++]=a[i];
			max=a[i];
		}

	}
	for(long int i=j-1;i>=0;i--)
	cout<<b[i]<<" ";
	return 0;									
}
