#include<iostream>
using namespace std;
void marks(int m){
	if(m>=91&&m<=100)
	cout<<"AA";
	else if(m>=81&&m<=90)
	cout<<"AB";
	else if(m>=71&&m<=80)
	cout<<"BB";
	else if(m>=61&&m<=70)
	cout<<"BC";
	else if(m>=51&&m<=60)
	cout<<"CD";
	else if(m>=41&&m<=50)
	cout<<"DD";
	else
	cout<<"Fail";
}
int main()
{
	int x;
	cin>>x;
	marks(x);
	return 0;
}
