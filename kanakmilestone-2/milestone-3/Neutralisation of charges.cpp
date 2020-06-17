

#include <iostream>

using namespace std;

int main() {
	int num,count,i;
	cin >> num;		
	string s,k;
	k="";
	cin>>s;
	char a=s[0];
	count=0;
	for(i=0;i<s.length();i++)
	{
		if(s[i]==a)
		count++;
		else
		{
			if(count%2==1)
			k+=s[i-1];
			a=s[i];
			count=1;

		}
	}
	if(count%2==1)
			k+=s[i-1];
			a=s[i];
			count=1;

	s="";
	a=k[0];
	count=0;
	for(i=0;i<k.length();i++)
	{
		if(k[i]==a)
		count++;
		else
		{
			if(count%2==1)
			s+=k[i-1];
			a=k[i];
			count=1;

		}
	}
	if(count%2==1)
			s+=k[i-1];
			a=k[i];
			count=1;
	
	cout<<s.length()<<endl;
	for(int i=0;i<s.length();i++)
	cout<<s[i];
	
	return 0;
	}								// Reading input from 
