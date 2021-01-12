#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll n,m;
    
   cin>>n>>m;

   char a[n][m];

      for(int i=0;i<n;i++)
{
     for(int j=0;j<m;j++)
     cin>>a[i][j];
}
 
 ll x=0;
 
 for(int i=0;i<n;i++)
 {
      for(int j=0;j<m-3;j++)
     {
         if(a[i][j]=='s' && a[i][j+1]=='a' && a[i][j+2]=='b' && a[i][j+3]=='a')
         x++;
     }
 }

     for(int i=0;i<n-3;i++)
     { 
         for(int j=0;j<m;j++)
        { 
            if(a[i][j]=='s' && a[i+1][j]=='a' && a[i+2][j]=='b' && a[i+3][j]=='a')
         x++;
        }
     }
         for(int i=0;i<n-3;i++)
         {
             for(int j=0;j<m-3;j++)
          {
              if(a[i][j]=='s' && a[i+1][j+1]=='a'  && a[i+2][j+2]=='b' && a[i+3][j+3]=='a')
         x++;
              
          }
         }
         
        for(int i=n-1;i>2;i--)
        {
            for(int j=0;j<m-3;j++)
            {
                if(a[i][j]=='s' && a[i-1][j+1]=='a' &&  a[i-2][j+2]=='b'  && a[i-3][j+3]=='a')
          x++;
         
     } 
 }
 
 cout<<x;
 
 return 0;
}
