/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
using namespace std;
int main()
{
	int i,j,n,m;
	cin>>n>>m;
	bool flag=false;
	char mat[n][m];
	for(i=0;i<(n+1)/2;i++)
	{
		for(j=0;j<(m+1)/2;j++)
		{
			if(j==0||j==m-1||i==0||i==n-1)
			mat[i][j]='X';
			else
			{	if(j<=i)
				flag=!flag;

				if(flag)
				mat[i][j]='0';
				else
				mat[i][j]='X';
			}
		}
		if(i!=0)
		flag=!flag;
		
	}
	for(i=0;i<(n+1)/2;i++)
	{
		for(j=m-1;j>=m/2;j--)
		mat[i][j]=mat[i][m-j-1];
	}

	for(i=n-1;i>=n/2;i--)
	{
		for(j=0;j<m;j++)
		mat[i][j]=mat[n-1-i][j];
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<m-1;j++)
		cout<<mat[i][j]<<" ";
		cout<<mat[i][j];
		cout<<""<<endl;
	}
}
