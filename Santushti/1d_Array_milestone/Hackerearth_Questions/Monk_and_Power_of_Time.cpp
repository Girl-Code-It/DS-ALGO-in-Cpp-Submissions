#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll n;
    
    cin>>n;
    
    ll a[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
     
     ll b[n];
     
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    
    }
    
    ll x=0;

int k=0,temp;
    while(k<n)
    {
        if(a[k]==b[k])
        {
            k++;
           x++;
        }
        
        else
        {
            for(int j=k;j<n-1;j++)
            {
                temp=a[j];      
                 a[j]=a[j+1];
                 a[j+1]=temp;
                
            }
            x++;
        }
    }
     
    cout<<x;
  
    return 0;
}
