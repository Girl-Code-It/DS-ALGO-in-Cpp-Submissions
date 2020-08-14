#include <iostream>
using namespace std;
int recursion(int a,int b)
{   if(b==0)
    return a;
    else
    return recursion(b,a%b);
    
}
int main() {
	// your code goes here
   int a,b;
   cin>>a>>b;
   cout<<recursion(a,b)<<endl;
        
    
	return 0;
}
