#include<iostream>
using namespace std;
int main()
{
long long k,n,a[1000000],max;

cin>>n>>k;

for(int i=0;i<n;i++)
cin>>a[i];

for(int i=0;i<n-k+(1);i++)
{ 
     max=a[i];
    
    for(int j=i;j<k+i;j++)
    {
           if(max<a[j])
           max=a[j];
    }
    
    cout<<max<<" ";
}

return 0;

}
