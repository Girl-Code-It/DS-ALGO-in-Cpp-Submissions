#include<iostream>
using namespace std;
int main()
{
    
        long long n,h[1000000],max;
         

         cin>>n;
         
            for(long long i=0;i<n;i++)
             cin>>h[i];
             
             max=h[n-1];

    long long g[n],c=1;
    
    for(int i=0;i<n;i++)
       g[i]=-1;
       
       g[0]=max;
       
       for(int i=n-2;i>=0;i--)
       {
           if(h[i]>=max)
           {
               g[c]=h[i];
               c++;
               max=h[i];
               
           }
       }
 
       for(int i=c-1;i>=0;i--)
         cout<<g[i]<<" ";
         
     return 0;
}
