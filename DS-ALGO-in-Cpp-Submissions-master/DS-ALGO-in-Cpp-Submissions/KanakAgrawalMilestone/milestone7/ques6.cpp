#include <iostream>
using namespace std;
int recursion(int n)
{   if(n==0)
    return 0;
    else
     return n%10+recursion(n/10);
    
}
int main() {
	// your code goes here
    int n;
    cin>>n;
	cout<<recursion(n)<<" ";
        
    
	return 0;
}
