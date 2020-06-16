#include <iostream>
using namespace std;
#include<math.h>
int power(int a,int b)
{   
    if(b==1)
    return a;
    else
    return a*power(a,b-1);
}

int main() {
   int a,b;
   cin>>a>>b;
   a=power(a,b);
   cout<<a<<endl;
	return 0;
}
