/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
using namespace std;
int main()
{
	int n,m,i,j,k;
	cin>>n>>m;
	int matrix[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			cin>>matrix[i][j];
	}
	i=0;
	j=0;
	k=0;
	for(k=0;k<n-1;k++)
	{	j=0;
		for(i=k;i>=0;i--)
		{
			
				cout<<matrix[i][j++]<<" ";
		}
		cout<<""<<endl;
	}
	
	
	for(j=0;j<m;j++)
	{i=n-1;
		for(k=j;k<m;k++)
		{
			cout<<matrix[i--][k]<<" ";
		}
		cout<<""<<endl;
	}
}
