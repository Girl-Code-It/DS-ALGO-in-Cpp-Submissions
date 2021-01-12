#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll t;
    
    cin>>t;
    
    while(t--)
    {
        ll n,m;
         ll count=0;
        
        cin>>n>>m;
        
        char a[n][m];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        
        string s;
        cin>>s;
        
       int k=s.size();
        
        for(int i=0;i<k;i++)
        {
          int  l=i%n;
            for(int j=0;j<m;j++)
            {
                if(a[l][j]==s[i])
                {
                    a[l][j]='A';
                    count++;
                    break;
                }
            }
            
        }
        
        if(count>=k)
        cout<<"Yes\n";
        else
        cout<<"No\n";
    }
    
    return 0;
}

