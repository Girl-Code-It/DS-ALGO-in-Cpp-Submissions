

#include <iostream>

using namespace std;
#include<bits/stdc++.h>
int main() {
	long int n;
	int c;
	cin>>n;
	long long int a[n],b[n],d,i,j;
	i=0;j=0;
	while(n--)
	{
		cin>>c;
		cin>>d;
		if(c)
		{
			a[i]=d;
			i++;
		}else
		{
			b[j]=d;
			j++;
		}

	}
	sort(a,a+i,greater<int>());
	sort(b,b+j,greater<int>());
	for(long long int k=0;k<j;k++)
	cout<<b[k]<<" ";
	for(long long int k=0;k<i;k++)
	cout<<a[k]<<" ";

	return 0;
}
