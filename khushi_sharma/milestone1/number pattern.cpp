#include <iostream>
using namespace std;

int main() {
int n ,i, j;
cin>>n;
    for(i=n; i>=1; i--)
    {
        for(j=i; j<=n; j++)
        {
            cout<<j;
        }

        for(j=i; j>1; j--)
        {
            cout<<n;
        }

        cout<<"\n";
    }
	return 0;
}
