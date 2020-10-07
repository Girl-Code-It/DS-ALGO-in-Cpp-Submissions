#include<iostream>
using namespace std;
int mult(int x,int y){
	return x*y;
}
int main()
{
	int x,y;
	cin>>x>>y;
	cout<<mult(x,y)<<"\n";
	return 0;
}
