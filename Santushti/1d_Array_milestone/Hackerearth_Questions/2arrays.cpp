#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    long long t=0,k=0,n,s1=0,s2=0 ;
    
    cin>>n;
    
    long long a[n],b[n];
    
    for(int i=0;i<n;i++)
   {
       cin>>a[i];
      if(a[i]==-1)
      t++;
      
      else
      s1+=a[i];
   }
      
      for(int i=0;i<n;i++)
    {
        cin>>b[i];
      
      if(b[i]==-1)
      k++;
      
      else
      s2+=b[i];
    }

if(t==k )
cout<<"Infinite";

else if(t==1 || k==1)
{
    if(t==1 && s1>s2)
    cout<<"0";
    
     else if(k==1 && s2>s1)
     cout<<"0";
     
     else
     cout<<"1";
}
else 
{
    if(t==2 && s1>s2)
    cout<<"0";
    
    else if(k==2 && s2>s1)
    cout<<"0";
    
    else
    {
    
    if(s1==s2)       
    cout<<"1";
    
    else
    cout<<abs(s1-s2)+1; 
    }
    
}

    return 0;
}
    
