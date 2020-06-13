#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int num,no;
    num=n;
    no=0;
	for(int i=0;i<n;i++)
	{   no=n-i;
	    for(int p=0;p<i;p++)
	        cout<<no++;
	    for(int j=0;j<(n-i);j++)
	        cout<<n;
	    cout<<""<<endl;
	}
	return 0;
}
