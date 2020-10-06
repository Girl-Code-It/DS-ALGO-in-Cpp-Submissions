#include <iostream>
using namespace std;
double cube(double num);

int main()
{
    int num;
    double c;
    cin>>num;
    c = cube(num);

    cout<<c; 
    
    return 0;
}

double cube(double num)
{
    return (num * num * num);
}
