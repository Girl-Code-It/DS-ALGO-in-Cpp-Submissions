#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       long int n,m;
       long long int answer=0;
        int i;
        char ch;
        int array[16];
        for(i=0;i<16;i++)
        array[i]=0;
        
        cin>>n>>m>>ch;
        while(n)
        {
            i--;
            array[i]=n&1;
            n=n>>1;

        }
        m=m%16;
        i=0;
        if(ch=='L')
            i+=m;
        else
            i=16-m;
        int j=15,k=i;
        for(;i<16;i++)
        {
           if(array[i])
           answer+=pow(2,j--);
           else
           j--;
        }    
        for(i=0;i<k;i++)
        {
            if(array[i])
           answer+=pow(2,j--);
           else
           j--;
        }
        cout<<answer<<endl;
    }
}
