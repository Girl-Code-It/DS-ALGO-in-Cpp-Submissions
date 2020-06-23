
#include <iostream>

using namespace std;

int main() {


//partial solved



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
			for(int i=0;i<n/2;i++)
			{
				for(int j=0;j<n/2;j++)
				{
					if((a[i][j]==a[n-i-1][j])&&(a[i][j]==a[i][n-1-j]))
						int h=0;
					else
					{
						cout<<"NO"<<endl;
						//cout<<a[i][j]<<" "<<a[n-1-i][j]<<" "<<a[i][n-1-j]<<endl;
						//cout<<i<<" "<<j<<endl;
						goto q;
					}
				}
			}
			if(n%2==1)
			{	
				int i=n/2;
				for(int j=0;j<n/2;j++)
				{
					if(a[i][j]==a[i][n-1-j])
					int h=0;
					else
					{
						cout<<"NO"<<endl;
						goto q;
					}
				}
				i=n/2;
				for(int j=0;j<n/2;j++)
				{
					if(a[j][i]==a[n-1-j][i])
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
