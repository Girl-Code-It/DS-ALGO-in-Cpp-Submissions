#include<iostream>
#include<cmath>
using namespace std;
int main()
{
          long long int t,n,m=1000000007;
    
             cin>>t;
    
            for(int i=0;i<t;i++)
{
            cin>>n;
            
           long long int a[n];
    
           for(int j=0;j<n;j++)
           cin>>a[j];
    
         long long int charge=0;
          long long int p=pow(2,n-1);
          
          if(n>=64)
          cout<<"0\n";
          
        else
        {
          for(int j=0;j<n;j++)
    {
           if(a[j]>=p)
           charge=(a[j]%m+charge)%m;
    }
    
         cout<<charge%m<<"\n";
        }
} 
  

return 0;
}
