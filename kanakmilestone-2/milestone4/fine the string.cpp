

#include <iostream>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		string s;
		char a[n+1][m+1];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			cin>>a[i][j];
		}
		cin>>s;
		int i=0;
		while(i<s.length())
		{   int p=i%n;
			for(int j=0;j<m;j++)
			{
				if(a[p][j]==s[i])
				{	a[p][j]='0';
					goto l;
				}				
			}
			cout<<"No"<<endl;
			goto q;
			l:
			i++;
		}
		cout<<"Yes"<<endl;
		q:
		int g=0;
	}
	return 0;
}
