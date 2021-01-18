#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x=0,s;
    
    cin>>n;
    
    long long a[n];
    
    for(int i=0;i<n;i++)
    cin>>a[i];
    
    for(int i=0;i<n;i++)
    {
       long long sum=0;
        
        for(int j=i;j<n;j++)
        {
            sum+=a[j];
        
        s=sqrt(sum);
        
        if((s*s)==sum) //floor funcn
        x++;
            
        }
        
    }
    
    cout<<x;
    
    return 0;
    
}
