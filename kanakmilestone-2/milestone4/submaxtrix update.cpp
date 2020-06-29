
#include <iostream>

using namespace std;

int main() {
	int n,m,k,i,j,r,c,s,p;
	cin>>n>>m>>k;
	long int a[n][m];
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		cin>>a[i][j];
	}
	long int d;
	for(i=0;i<k;i++)
	{
		cin>>r>>c>>s>>d;
		for(j=r-1;j<r-1+s;j++)
		{
			for(p=c-1;p<c-1+s;p++)
			a[j][p]+=d;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		cout<<a[i][j]<<" ";
		cout<<""<<endl;
	}
	return 0;
}
