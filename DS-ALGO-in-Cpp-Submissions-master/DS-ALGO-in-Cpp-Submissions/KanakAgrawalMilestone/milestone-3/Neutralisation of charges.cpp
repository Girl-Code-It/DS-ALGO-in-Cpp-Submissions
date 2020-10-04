

#include <iostream>

using namespace std;

int main() {
	long int num,count,i;
	cin >> num;		
	string s,k;
	k="";
	cin>>s;
	char a=s[0];
	count=0;
	long int p=0;
	for(i=0;i<s.length();i++)
	{
		if(s[i]==a)
		count++;
		else
		{
			if(count%2==1)
			{	if(a!=k[k.length()-1])
				k+=s[i-1];
				//cout<<k<<"ppp"<<endl;
				a=s[i];
				count=1;
			}else{
				if(s[i-1]==k[k.length()-1])
				k=k.substr(0,k.length()-1);
				a=k[k.length()-1];
			//	cout<<a<<endl;
				count=1;
				i--;
			}

		}
	}
	if(count%2==1)
			{	if(a!=k[k.length()-1])
				k+=s[i-1];
				//cout<<k<<"ppp"<<endl;
				a=s[i];
				count=1;
			}else{
				if(s[i-1]==k[k.length()-1])
				k=k.substr(0,k.length()-1);
				a=k[k.length()-1];
			//	cout<<a<<endl;
				count=1;
				i--;
			}
	
	
	cout<<k.length()<<endl;
	for(long int i=0;i<k.length();i++)
	cout<<k[i];
	
	return 0;
	}								// Reading input from 
