#include<iostream>
using namespace std;

int power(int a, int b){
//	cout<<"\n a= "<<a<<" b= "<<b<<"\n";
	
	if(b == 0){
		return 1;
	}else{
		return (a*power(a,b-1));
	}
	
}

int main()
{
	int a,b; 
	cin>>a>>b;

    cout<<power(a,b);
    
	return 0;
}	
