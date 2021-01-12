#include <bits/stdc++.h>
using namespace std;

int main() {

    long long int n, a[10000];
    
    cin>>n;

    for(int i = 0; i < n; ++i) {

        cin>>a[i];
    }

    for(int i = 0; i < n-1; ++i) {
        
        int flag = 0;
        
        if(a[i]<a[i+1] && a[i]!=0 && a[i+1a[i+1] -=a[i];
    a[i]=0;
    flag++;
}
else if(a[i]>a[i+1] && a[i]!=0 && a[i+1]!=0)
{
a[i] -=a[i+1];
a[i+1]=0;
flag++;
}
else if( a[i]!=0 && a[i+1]!=0)
{
a[i]=0;
a[i+1]=0;
flag++;
}
if(flag==0)
break;
}
int flag=0;
for(int i=0;i<n;i++)
{
if(a[i]==0)
flag++;
}
if(flag==n)
cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
