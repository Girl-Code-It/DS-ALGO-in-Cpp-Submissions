#include <iostream>
using namespace std;
int isArmstrong(int num);
void printarmstrongNumbers(int start, int end)
{
    while(start <= end)
    {
        if(isArmstrong(start)) 
        {
            cout<<start<<" ";
        }
        
        start++;
    }
}
int isArmstrong(int num)
{
    int temp, lastDigit, sum;
    
    temp = num;
    sum = 0;
    while(temp != 0)
    {
        lastDigit = temp % 10;
        sum += lastDigit * lastDigit * lastDigit;
        temp /= 10;
    }
    if(num == sum)
        return 1;
    else 
        return 0;
}

int main()
{
    int start, end;
    
  
 cout<<"enter lower limit\n";
    cin>>start;
    cout<<"enter upper limit\n";
    cin>>end;
    cout<<"all armstrong numer between given two number is\n";
    printarmstrongNumbers(start, end);
    
    return 0;
}


