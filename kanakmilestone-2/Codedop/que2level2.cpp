#include <iostream>
using namespace std;
#include<math.h>

void primefactor(int a)
{   int i=2;
    while(i<=a/2)
    {
        if(a%i==0)
        {int j=2;
        int flag=1;
            while(j<i)
            {
                if(i%j==0)
                {flag=0;
                    goto k;}
                j++;
            }
            if(flag)
            cout<<i<<" ";
        }
        k:
        i++;
    }
}

int main() {
    int a;
  cin>>a;
  primefactor(a);
	return 0;
}
