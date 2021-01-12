#include<iostream>
using namespace std;
int main()
{
    
   long long t,min,n,k,str[n];

cin>>t;
if(t>=1&&t<=5)
{
    for(long long int i=0;i<t;i++)
{  
         cin>>n>>k;
    
   for(long long int j=0;j<n;j++)
    cin>>str[j];
    
      min=str[0];
      
      for(long long int j=0;j<n;j++)
      {
          if(min>=str[j])
          min=str[j];
      }
     
      if(min>=k)
      cout<<"0"<<endl;
     
      else
      cout<<k-min<<endl;
}
}

  return 0;
    }
