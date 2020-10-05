#include<iostream>
using namespace std;
int main(){
	int n,x=1,y=1;
	cin>>n;
	for(int i=1;i<=n;i++){

		for(int j=1;j<=x;j++){
			cout<<y;
		y++;
		if(y>9)
		y=1;	
		}
		x*=2;
		cout<<"\n";

}
}
