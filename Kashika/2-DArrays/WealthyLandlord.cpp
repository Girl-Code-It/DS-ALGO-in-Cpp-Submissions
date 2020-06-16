#include<bits/stdc++.h>
#include<stdio.h>
#include<stdlib.h>
#define size 1001

int main()
{
    int i,j;
    int n, x1,x2,y1,y2,cost=0;
    long long total_cost=0;
    int a[size][size]={0};
    
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d%d%d%d",&x1,&y1,&x2,&y2,&cost);
        for(i=x1;i<=x2;i++)
        {   for(j=y1;j<=y2;j++)
            {
                if(a[i][j]==0)
                a[i][j]+=cost;
                
                else if (a[i][j]>0)
                {
                    a[i][j]=(-1)*(a[i][j]+cost);
                }
                
                else if(a[i][j]<0)
                {
                    a[i][j]-=cost;
                }
            }
         }
        
    }
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(a[i][j]<0)
            {
                total_cost+=a[i][j];
            }
        }
    }
    
    printf("%lld\n",(-1)*total_cost);
    return 0;
}
            
