#include <iostream>
using namespace std;

void sort(int A[],int n)
{
int temp;
    for(int k = 0; k< n-1; k++)
    {
        for(int i = 0; i < n-k-1; i++)
        {
            if(A[ i ] > A[ i+1] )
            {
                temp = A[ i ];
                A[ i ] = A[ i+1 ];
                A[ i + 1] = temp;
            }
        }
    }
}

int main() 
{
int n;
cin>>n;
int a[n][2];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>a[i][j];
        }
    }
    
int b[1000000],c[10000000];
int k=0,l=0,x=0,y=0;

    for(int i=0;i<n;i++)
    {
        if(a[i][0]==0)
        {
            b[k]=a[i][1];
            k++;
            x++;
        }

        else
        {
            c[l]=a[i][1];
            l++;
            y++;
        }
    }

sort(b,x);
sort(c,y);

    for(int k=x-1;k>=0;k--)
    {
        cout<<b[k]<<" ";
    }

    for(int k=y-1;k>=0;k--)
    {
        cout<<c[k]<<" ";
    }
return 0;
}
