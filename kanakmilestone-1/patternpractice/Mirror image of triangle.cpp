#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int num;
 
	for(int i=0;i<n;i++)
	{   
	    for(int p=0;p<n-i;p++)
	        cout<<" ";
	        num=i;
	    for(int j=0;j<=i;j++)
	        cout<<num--;
	        num++;
	    for(int k=0;k<i;k++)
	    {
	        cout<<++num;
	    }
	    cout<<""<<endl;
	}
	return 0;
}
