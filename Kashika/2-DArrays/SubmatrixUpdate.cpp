
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,r,c,s,d;
    cin>>n>>m>>k;
    int a[n][m],i,j;
    for(i=1;i<=n;i++)
    {   for(j=1;j<=m;j++)
        {   
            cin>>a[i][j];
        }
    }
    while(k--)
    {
        cin>>r>>c>>s>>d;
        for(i=r-1;i<=r+s-;i++)
        {   for(j=c;j<=c+s-1;j++)
            {   
                a[i][j]+=d;
            }
        }
    }
    for(i=1;i<=n;i++)
    {   for(j=1;j<=m;j++)
        {  
            cout<<a[i][j]<<" ";
        }
            cout<<"\n";
    }
}
