#include<iostream>
using namespace std;
int largest(int x,int y,int z){
	if(x>y&&x>z)
	return x;
	else if(y>x&&y>z)
	return y;
	else if(z>x&&z>y)
	return z;
}
int main()
{
	int x,y,z;
	cin>>x>>y;
	cout<<largest(x,y,z)<<"\n";
	return 0;
}
