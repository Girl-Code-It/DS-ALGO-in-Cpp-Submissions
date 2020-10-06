#include <iostream>
#include <math.h> 
using namespace std;
double getDiameter(double radius);
double getCircumference(double radius);
double getArea(double radius);


int main() 
{
    float radius, dia, circ, area;
    
   
    cout<<"Enter radius of circle: ";
   cin>>radius;
    
    dia  = getDiameter(radius);       // Call getDiameter function
    circ = getCircumference(radius);  // Call getCircumference function
    area = getArea(radius);           // Call getArea function
    
cout<<"diameter of circle is ="<<dia<<"\n";
cout<<"circumference of circle is ="<<circ<<"\n";
cout<<"area of circle is"<<area<<"\n";
    
    return 0;
}

double getDiameter(double radius) 
{
    return (2 * radius);
}
double getCircumference(double radius) 
{
    return (2 * M_PI * radius);  
}
double getArea(double radius)
{
    return (M_PI * radius * radius); 
}
