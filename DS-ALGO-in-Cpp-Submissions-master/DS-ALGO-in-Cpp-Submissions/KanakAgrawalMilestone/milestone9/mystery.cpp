
#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{   
    long long int n,count;
    count=0;
    cin>>n;
    do{
        count=0;
        while(n)
    {
        n=n&(n-1);
        count++;
    }
    cout<<count<<endl;

    cin>>n;
    }while(n);
    return 0;
}
