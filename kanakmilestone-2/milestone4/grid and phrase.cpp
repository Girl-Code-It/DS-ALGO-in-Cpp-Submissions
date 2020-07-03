
#include <iostream>

using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	string s[n+1];
	for(int i=0;i<n;i++)
	cin>>s[i];
	long int count=0;

	//for searching horizontally
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m-3;j++)
		{
			if(s[i][j]=='s'&&s[i][j+1]==s[i][j+3]&&s[i][j+1]=='a'&&s[i][j+2]=='b')
			{count++;
			//	cout<<i<<" "<<j<<"k"<<endl;
			}
			
		}
	}
	//for searching vertically
	for(int i=0;i<n-3;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(s[i][j]=='s'&&s[i+1][j]==s[i+3][j]&&s[i+3][j]=='a'&&s[i+2][j]=='b')
				{count++;
				//cout<<i<<" "<<j<<"q"<<endl;
			}
			
		}
	}
	
	//searching diagonally from left top to right bottom
	for(int i=0;i<n-3;i++)
	{	
		for(int j=0;j<m-3;j++)
		{
			if(s[i][j]=='s'&&s[i+1][j+1]==s[i+3][j+3]&&s[i+1][j+1]=='a'&&s[i+2][j+2]=='b')
			{count++;
				//cout<<i<<" "<<j<<"m"<<endl;
			}
			
		}
	}
	
	//searching diagonally from right top to left bottom
	for(int i=0;i<n-3;i++)
	{	for(int j=m-1;j>2;j--)
			{
				
			if(s[i][j]=='a'&&(s[i][j]==s[i+2][j-2])&&s[i+3][j-3]=='s'&&s[i+1][j-1]=='b')
			{count++;
				//cout<<i<<" "<<j<<"t"<<endl;
			}
			}
	}
	
	cout<<count<<endl;
	return 0;
	}


