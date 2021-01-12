#include<iostream>
using namespace std;
int  main()
{
    long long n,a[100000],sum,t,q;
    
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
       cin>>n;
       
       sum=0;
        
        for(int j=0;j<n;j++)
       {
           cin>>a[j];
       sum+=a[j];
       }
        
        q=0;
        
        for(int j=0;j<n;j++)
    
    {    if(sum-a[j]<=a[j])
        {q=1;
        break;
        }
          }
        
        if(q==1)
        cout<<"No"<<endl;
        else
        cout<<"Yes"<<endl;
    }
    
    return 0;
}
