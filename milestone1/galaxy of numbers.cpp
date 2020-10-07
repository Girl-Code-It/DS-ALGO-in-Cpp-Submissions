#include<iostream>
using namespace std;
void printPatt(int n)
{
     for(int i=1; i<=n/2+1; i++)
    {
        for(int j=1; j<=i; j++)
        {
        	cout<< "*";            
        }
        cout<<endl;
    }
    for(int i=n/2+1; i<=n+1; i++)
    {
        for(int j=n; j>i; j--)
        {
            cout<<"*";
            
        }
        cout<<endl;
    }
}
int main(){
	int n;
	cin>>n;
	printPatt(n);
	}
