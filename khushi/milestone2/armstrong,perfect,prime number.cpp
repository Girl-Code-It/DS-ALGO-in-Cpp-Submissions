
#include <iostream>
using namespace std;
#include <math.h>

int isPrime(int num)
{
    int i;
    
    for(i=2; i<=num/2; i++)  
    {  
       
        if(num%i == 0)  
        {
            return 0;
        }  
    } 
    
    return 1; 
}
int isArmstrong(int num) 
{
    int lastDigit, sum, originalNum, digits;
    sum = 0;
    
    originalNum = num;


    digits = (int) log10(num) + 1;

   
    while(num > 0)
    {
      
        lastDigit = num % 10;

       
        sum = sum + round(pow(lastDigit, digits));

        num = num / 10;
    }
    
    return (originalNum == sum);
}


int isPerfect(int num) 
{
    int i, sum, n;
    sum = 0;
    n = num;
    
    for(i=1; i<n; i++)  
    {  
     
        if(n%i == 0)  
        {  
            sum += i;  
        }  
    }
    
    return (num == sum);
}




int main()
{
    int num;
    cin>>num;
 
    if(isPrime(num))
    {
       cout<<"number is prime\n";
    }
    else
    {
       cout<<"number is not prime\n";
    }
    
  
    if(isArmstrong(num))
    {
        cout<<"number is armstrong\n";
    }
    else
    {
        cout<<"given number is not Armstrong number\n";
    }
    
    if(isPerfect(num))
    {
        cout<<"number is Perfect number.\n";
    }
    else
    {
        cout<<"number is not Perfect number.\n";
    }
    
    return 0;
}





