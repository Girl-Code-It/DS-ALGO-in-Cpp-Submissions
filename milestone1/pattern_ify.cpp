#include<iostream>
using namespace std;
void printPatt(int n)
{
    //write your code here
    for( int i=1;i<=n;i++)
    {
        for(int j=n;j>=i;j--)
            cout<<"*";
        cout<<"\n";
    }
    
}
int main(){
	int n;
	cin>>n;
	printPatt(n);
	}
