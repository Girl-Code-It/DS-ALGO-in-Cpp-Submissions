#include <iostream>
using namespace std;
#include<math.h>

int fibo(int a)
{   
    if(a==1||a==0)
    return a;
    else
    return fibo(a-1)+fibo(a-2);
}

int main() {
    int a;
  cin>>a;
  a=fibo(a);
  cout<<a<<endl;
	return 0;
}
