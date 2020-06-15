#include <iostream>
using namespace std;

int minimum(int a,int b,int c)
{
    int mini;
    if(a<=b&&a<=c)
        mini=a;
    else if(b<=a&&b<=c)
        mini=b;
    else
       mini=c;
    return mini;
}
int maximum(int a,int b,int c)
{
    int maxi;
    if(a>=b&&a>=c)
        maxi=a;
    else if(b>=a&&b>=c)
        maxi=b;
    else
       maxi=c;
    return maxi;
}
int main() {
    int a,b,c;
    cin>>a>>b>>c;
   int mini,maxi;
    mini=minimum(a,b,c);  
	cout<<"minimum"<<mini<<endl;
	maxi=maximum(a,b,c);
	cout<<"maximum"<<maxi<<endl;
	return 0;
}
