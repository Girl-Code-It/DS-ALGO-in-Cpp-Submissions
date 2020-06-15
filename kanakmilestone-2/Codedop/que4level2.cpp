#include <iostream>
using namespace std;
#include<math.h>
void perfect(int a)
{   int i=1;
    int sum=0;
    while(i<=a/2) {
        if(a%i==0)
            sum+=i;
        
     
        i++;

    }
    if(sum==a)
    cout<<a<<" ";

}

int main() {
   for(int i=2;i<=1000;i++)
    perfect(i);
	return 0;
}
