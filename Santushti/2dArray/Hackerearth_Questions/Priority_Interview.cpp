#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll n;
    
    cin>>n;
    
    ll a[n][2];
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>a[i][j];
        }
     
    }
    
     long int boy[n],girl[n];
    int k=0,y=0;
    
    for(int i=0;i<n;i++)
    {
     
         if(a[i][0]==0)
          {
              girl[k]=a[i][1];
                      k++;
           }
            else
            {  boy[y]=a[i][1];
                      y++;
            }
    }
    
    sort(girl,girl+k,greater<int>());
    sort(boy,boy+y,greater<int>());
    
    for(int i=0;i<n;i++)
{
          if(i<k)
        {
            cout<<girl[i]<<" ";
        }
        
        else
        cout<<boy[i-k]<<" ";
        
    }
    
    return 0;
}

