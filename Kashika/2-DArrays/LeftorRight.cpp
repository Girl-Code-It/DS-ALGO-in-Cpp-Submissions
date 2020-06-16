#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t,n,m;
    
      cin>>n>>t;
        
        ll a[n],y,z;
        char d;
        for(ll i=0;i<n;++i)
        {
           cin>>a[i];
        }
        
    while(t--)
    {
        //m=0;
        ll c=-1;
        cin>>y>>z>>d;
        //cout<<y<<" "<<z<<" "<<d<<" ";
        if(d=='L')
        {
            for(int i=y;i>=0;--i)
            {
                if(a[i]==z)
                {
                    c=i;
                    break;
                }
            }
            
            if(c==-1)
            {
                for(int i=n;i>y;--i)
                {
                if(a[i]==z)
                {
                    c=i;
                    break;
                }
                }
            }
            //cout<<c<<" ";
            if(c==-1)
            m=-1;
            else if(c<=y)
                m=y-c;
                else m=y+n-c;
        }else {
            for(int i=y;i<n;++i)
            {
                if(a[i]==z)
                {
                    c=i;
                    break;
                }
            }
            if(c==-1)
            {
                for(int i=0;i<y;++i)
                {
                if(a[i]==z)
                {
                    c=i;
                    break;
                }
                }
            }
            if(c==-1)
            m=-1;
            else if(c>=y)
                m=c-y;
                else m=c+n-y;
        }
        cout<<m;
        cout<<endl;     
    }
    
    return 0;
}
