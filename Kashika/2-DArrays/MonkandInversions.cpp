
#include <iostream>

using namespace std;


int main()
{
int t;
cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    int arr[n][n];
    int i,j;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>arr[i][j];
            }
        }
int k=0,l=0;
int count=0;
    while(k<n && l<n)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(arr[k][l]>arr[i][j] && k<=i && l<=j)
                count++;
            }
        }
        l++;
    
        if(l==n)
        {
            k++;
            l=0;
        }
    }
cout<<count<<endl;
}
return 0;
}
