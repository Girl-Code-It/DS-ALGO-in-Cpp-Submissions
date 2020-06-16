
#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,j;
        cin>>n;
        ll a[n][2];
        ll count=0;
      
      for(i=0;i<n;i++)
      {     for(j=0;j<=1;j++)
            {   
                cin>>a[i][j];
            }
      }
      
      for(i=0;i<n;i++)
      {
        if(((a[i][1]/a[i][0])==1 && (a[i][1]%a[i][0])==0)  || (a[i][1]/a[i][0])== -1)
        {   
            count++;
        }
      }
        cout<<count<<endl;
    }
}
Language: C++
