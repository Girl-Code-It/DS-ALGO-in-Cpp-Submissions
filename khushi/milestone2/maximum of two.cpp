#include<iostream>
using namespace std;
int max(int x,int y){
	if(x>y)
	return x;
	else 
	return y;
}
int min(int num1, int num2) 
{
    return (num1 > num2 ) ? num2 : num1;
}
int main(){
	int x,y;
     cin>>x>>y;
	 cout<<"maximum of given two number is="<<max(x,y)<<"\n";
	 cout<<"minimum of given two number is="<<min(x,y);
	 return 0;	
}
