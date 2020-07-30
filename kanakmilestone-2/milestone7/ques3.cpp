#include <iostream>
using namespace std;
int recursion(int n)
{   if(n==1||n==2)
    return 1;
    else
     return recursion(n-1)+recursion(n-2);
    
}
int main() {
	// your code goes here
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
	cout<<recursion(i)<<" ";
        
    }
	return 0;
}
