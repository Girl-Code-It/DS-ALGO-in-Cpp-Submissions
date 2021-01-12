#include<iostream>
using namespace std;
int main()
{   
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long a[100000],b[100000],n;
        int k,max;
      long int sum=0;
          cin>>n>>k;
          
         for(int j=0;j<n;j++)
             cin>>a[j];
         for(int j=0;j<n;j++)
             cin>>b[j];
           
             max=b[0];
         for(int j=1;j<n;j++)
         {
             if(max<=b[j])
              max=b[j];
         }
        
            for(int q=0;q<n;q++)
         {
             if(a[q]<max+(1))
             
                 sum+=k*(max+(1)-a[q]);
            
             
         }
    cout<<sum<<endl;
         
    }
return 0;
    
}
