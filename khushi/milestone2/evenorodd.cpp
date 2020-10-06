#include<iostream>
using namespace std;
int evenorodd(int x){
	if(x%2==0)
	return 1;
	else 
	return 0;
}
int main(){
	int x,y;
     cin>>x;
     y=evenorodd(x);
     if(y==1)
	 cout<<"given number is even"<<"\n";
	 else
	 cout<<"given number is odd";
	 return 0;	
}
