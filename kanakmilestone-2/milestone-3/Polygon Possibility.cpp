
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#include<algorithm>
#include<numeric>
#include<math.h>
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	long int num,i;
	long long int ans;
	cin >> num;		
	int a[num];
	int max=0;
	
	for(i=0;i<num;i++)
	{	cin>>a[i];
		if(a[i]>max)
		max=a[i];
	}
	
	ans=accumulate(a,a+num,0);
	ans=ans-max;
	if(ans>max)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;						
	}
	return 0;

								}								// Reading input from 
