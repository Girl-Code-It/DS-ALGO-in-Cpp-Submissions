#include<iostream>
using namespace std;
int main()
{  
    long long q;
      
      cin>>q;
      
     while(q--)
{    
    long long  n;
    
       cin>>n;
  
     long long a[n],t=0,max=0;
     
    for(int i=0;i<n;i++)
   {    
      cin>>a[i];
    
   }
   
  
   
   for(int i=0;i<n;i++)
   {
       if(a[i]%2==0)
       {
           t++;
      
      }
       
        else
       { if(t>max)
          max=t;
           t=0;
       }
   }
   
   if(t>max)
   max=t;
   
   if(max)
   cout<<max<<endl;
   
   else
   cout<<"-1"<<endl;
}
return 0;}
