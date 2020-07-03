

#include <iostream>

using namespace std;

int main() {
	int t;
	cin>>t;
	int n;
	while(t--)
	{
		cin>>n;
		int a[n][n];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			cin>>a[i][j];
		}
		long int count=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				int d=a[i][j];
				for(int k=i;k<n;k++)
				{
					for(int p=j;p<n;p++)
					{
						if(a[k][p]<d)
						count++;
					}
				}	
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
