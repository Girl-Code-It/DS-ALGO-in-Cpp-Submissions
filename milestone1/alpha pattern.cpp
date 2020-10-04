#include<iostream>
using namespace std;
void printPatt(int n)
{
    for(int i=0;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        cout<<char(64+i);
    
    cout<<"\n";
    }
    
}
int main(){
	int n;
	cin>>n;
	printPatt(n);
	}
