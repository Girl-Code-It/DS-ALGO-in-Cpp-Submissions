#include<iostream>
using namespace std;
void seive(int m,int n)
{ int flag,i,j;
	 for(i=m; i<=n; i++)
    {
        flag=0;
        for(j=1; j<=n; j++)
        {
            if(i%j==0)
                flag++;
        }
        if(flag==2)
            cout<<i<<" ";
    }
	
}
int main()
{
    int n,m,i,fact,j;
    cin>>m>>n;
    seive(m,n);
    return 0;
}
