#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{  int t;

  cin>>t;
  
  while(t--)
  {
      ll n;
      
      cin>>n;
      
      char a[n][n];
      
      for(int i=0;i<n;i++)
      {
          for(int j=0;j<n;j++)
          {
              cin>>a[i][j];
      
          }
      }
    
      int flag=0;
     
      for(int i=0;i<n;i++)
      {
          for(int j=0;j<n;j++)
          {
              if(a[i][j]!=a[i][n-j-1])
              {
                  flag=1;
                  break;
                  
              }
          }
          if(flag==1)
          break;
      }
      
      for(int j=0;j<n;j++)
      {
          if(flag==1)
          break;
          
          for(int i=0;i<n;i++)
          {
              if(a[i][j]!=a[n-i-1][j])
          {
              flag=1;
              break;
          }
          }
          
      }
      
      
      
     if(flag==1)
     cout<<"NO"<<"\n";
     
     else
     cout<<"YES"<<"\n";
      
      
  }
    return 0;
}
