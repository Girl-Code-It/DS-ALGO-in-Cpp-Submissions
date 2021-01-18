#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll n,m,k;
    
    cin>>n>>m>>k;
    
    ll a[n][m];
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    
    while(k--)
    {
        int r,c,s,d;
        
        cin>>r>>c>>s>>d;
        
        for(int i=r-1;i<r+s-1;i++)
        {
            for(int j=c-1;j<c+s-1;j++)
            {
                a[i][j]+=d;
            }
        }
    }
    
    for(int i=0;i<n;i++)
    {
        
        
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        
         cout<<"\n";
       
    }
    
    return 0;
}
