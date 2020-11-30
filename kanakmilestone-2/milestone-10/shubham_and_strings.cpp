
#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{   int t;
cin>>t;
while(t--)
{
    long int n;
    cin>>n;
    string s;
    cin>>s;
    long int count=0,i=0;
    for(i=0;i<n;i++)
    {
        if(s[i]=='0')
        count++;
    }
    cout<<count<<endl;
}
    return 0;
}
