

// Write your code here
#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
       long long int count=0;
        for(int i=1;i<n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                if((i^j)<=n)
                count++;
            
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
