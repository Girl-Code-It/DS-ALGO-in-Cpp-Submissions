#include <bits/stdc++.h>
using namespace std;

///* Function declaration */
//long long fact(int num);
//void printStrongNumbers(int start, int end);

/**
 * Recursively find factorial of any number
 */
long long fact(int num)
{	cout<<"\n num= "<<num;
    if(num == 0){
		return 1;
	}
    else
        return (num * fact(num-1));
}

 /* Print all strong numbers in a given range
 */
void printStrongNumbers(int start, int end)
{
    long long sum;
    int num;
    
    // Iterates from start to end
    while(start != end)
    {
        sum = 0;
        num = start;
        
        // Calculate sum of factorial of digits
        while(num != 0)
        {
            sum += fact(num % 10);
            num /= 10; 
        }
        
        // If sum of factorial of digits equal to current number
        if(start == sum)
        {
           cout<<start<<", ";
        }
        
        start++;
    }
}




int main()
{
    int start, end;
    
    /* Input start and end range */
    cout<<"Enter the lower limit to find strong number: ";
    cin>>start;
    cout<<"Enter the upper limit to find strong number: ";
    cin>>end;
    
    cout<<"All strong numbers between "<<start<<" to "<<end<<" ";
    printStrongNumbers(start, end);
    
    return 0;
}



