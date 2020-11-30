
#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long long int n ;
        cin>>n;
        if(n&1)
        {
            for(int i=0;i<64;i++)
            {
                if((n&(1<<i))==0)
                {
                    n=n|(1<<i);
                    cout<<n<<endl;
                    goto p;
                }
            }
        }else{
            cout<<n+1<<endl;
        }
        p:
        int h=0;
    }
    return 0;
}
