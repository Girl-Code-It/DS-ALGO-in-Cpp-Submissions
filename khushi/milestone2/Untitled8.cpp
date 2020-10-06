#include <iostream>
using namespace std;
int isPerfect(int num);
void printPerfect(int start, int end);
int main()
{
    int start, end;
    
  
 cout<<"enter lower limit\n";
    cin>>start;
    cout<<"enter upper limit\n";
    cin>>end;
    cout<<"all perfect numer between given two number is\n";
    printPerfect(start, end);
    
    return 0;
}

int isPerfect(int num)
{
    int i, sum;
    
   
    sum = 0;
    for(i=1; i<num; i++)
    {
        if(num % i == 0)
        {
            sum += i;
        }
    }

    if(sum == num)
        return 1;
    else
        return 0;
}


void printPerfect(int start, int end)
{
    while(start <= end)
    {
        if(isPerfect(start))
        {
            cout<<start<<" ";
        }
        
        start++;
    }   
}
