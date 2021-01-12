#include<iostream>
using namespace std;
int main()
{    
    long long n,h[1000000];
    int x=1;

    cin>>n;

    for(int i=0;i<n;i++)
    cin>>h[i];
   
   for(int i=0;i<n-1;i++)
{
       if(h[i]>h[i+1])         
         x++;
    
    
}

      cout<<x<<endl;
      
      return 0;
}


