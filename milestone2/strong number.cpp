 
#include <iostream>
using namespace std;
long long fact(int num);
void printStrongNumbers(int start, int end)
{
    long long sum;
    int num;
    while(start != end)
    {
        sum = 0;
        num = start;
        
        
        while(num != 0)
        {
            sum += fact(num % 10);
            num /= 10; 
        }
        
       
        if(start == sum)
        {
            cout<<start<<" ";
        }
        
        start++;
    }
}


long long fact(int num)
{
    if(num == 0)
        return 1;
    else
        return (num * fact(num-1));
}


int main()
{
    int start, end;
    
  
 cout<<"enter lower limit\n";
    cin>>start;
    cout<<"enter upper limit\n";
    cin>>end;
    cout<<"all strong numer between given two number is\n";
    printStrongNumbers(start, end);
    
    return 0;
}


