
#include <iostream>

using namespace std;

int main() {
	int t;
	long int n,m,i,j,ans,k,h,size,r,s;
	
	cin>>t;
	while(t--)
	{	cin>>n>>m;
		long int a[n][m];
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			cin>>a[i][j];
		}
		ans=0;
		if(n<m)
		k=n;
		else
		k=m;
		size=0;
		long int count=0,num=0;
		while(size<k)
		{	size++;
			for(i=0;i<=n-size;i++)
			{
				for(j=0;j<=m-size;j++)
				{
					for(r=i;r<i+size;r++)
					{
						for(s=j;s<j+size;s++)
						{
							if(a[r][s]==0)
							goto v;
						}
					}
					if(count<size*size)
					count=size*size;
					v:
					h=0;
					//cout<<count<<" "<<i<<j<<endl;
				}
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
