
#include <iostream>

using namespace std;

int main() {
		int t;
		cin>>t;
		while(t--)
		{	int n;
			cin>>n;
			string a[n+1];
			for(int i=0;i<n;i++)
			{
				cin>>a[i];
			}
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					if((a[i][j]==a[n-i-1][j])&&(a[i][j]==a[i][n-1-j]))
						int h=0;
					else
					{
						cout<<"NO"<<endl;
						goto q;
					}
				}
			}
		
			cout<<"YES"<<endl;
			q:
			int r=0;
		}
		return 0;
	}								// Reading input from 
