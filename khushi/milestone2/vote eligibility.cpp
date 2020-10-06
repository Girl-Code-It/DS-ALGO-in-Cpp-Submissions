#include<iostream>
using namespace std;
int age(int x){
	if(x>=18)
	return 1;
	else 
	return 0;
}
int main()
{
	int x,y;
	cin>>x;
	y=age(x);
	if(y==1)
	cout<<"eligible to vote"<<"\n";
	else
	cout<<"not eligible";
	return 0;
}
