
#include <iostream>

using namespace std;

int main() {



//partially solved:(


	int n,i,y;
	long int q,j,z,count;
	cin>>n>>q;
	char d;
	long int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	for(j=0;j<q;j++)
	{	count=0;
		cin>>y>>z>>d;
		if(a[y]==z)
		cout<<0<<endl;
		else{
			if(d=='L')
			i=(y-1+n)%n;
			else
			i=(y+1)%n;
			count++;
			while(i!=y&&a[i]!=z)
			{	
				if(d=='L')
					i=(i-1+n)%n;
				else
					i=(i+1)%n;
				count++;
			}
			if(i==y)
			cout<<-1<<endl;
			else
			cout<<count<<endl;

		}
	}
	return 0;
}
