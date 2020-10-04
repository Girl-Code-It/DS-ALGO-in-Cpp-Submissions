#include <iostream>
using namespace std;
void recursion(int n)
{
    if(n==51)
    return ;
    else
    {
        cout<<n<<" ";
        return recursion(n+1);
    }
}
int main() {
	// your code goes here

	recursion(1);
	return 0;
}
