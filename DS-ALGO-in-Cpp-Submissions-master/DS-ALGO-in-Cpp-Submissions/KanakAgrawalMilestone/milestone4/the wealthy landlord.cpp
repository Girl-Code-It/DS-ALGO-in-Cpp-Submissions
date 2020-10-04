
#include <iostream>

using namespace std;

int main() {
	int n;
	cin>>n;
	int a[1001][1001]={0};
	int x1[n],x2[n],y1[n],y2[n],c[n];
	int k=n;
	while(n--)
	{
		cin>>x1[n]>>y1[n]>>x2[n]>>y2[n]>>c[n];
		for(int i=x1[n];i<=x2[n];i++)
		{
			for(int j=y1[n];j<=y2[n];j++)
			a[i][j]=a[i][j]+1;
		}
	}
	long int count=0;
	long int sum=0;
	for(int i=0;i<k;i++)
	{	count=0;
		for(int j=x1[i];j<=x2[i];j++)
		{
			for(int p=y1[i];p<=y2[i];p++)
			{
				if(a[j][p]>1)
				count++;			
			}
		}
		sum+=count*c[i];
	}
	cout<<sum<<endl;
	return 0;
	}
