#include <iostream>
using namespace std;

float area(int a)
{   float b=22.0/7*a*a;
    return b;
}
float circum(int a)
{
    float b=22.0/7*2*a;
    return b;
}
int main() {
    int a;
    float b;
    cin>>a;
    b=area(a);
    cout<<"area"<<b<<endl;
    b=circum(a);  
	cout<<"circumference"<<b<<endl;
	return 0;
}
