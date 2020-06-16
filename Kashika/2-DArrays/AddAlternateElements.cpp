#include <iostream>
 
using namespace std;
 
int main()
{
	int a[100][100],sum1=0,sum2=0,n;
	
	for (int i=0;i<3;i++)
	{
	    for(int j=0;j<3;j++)
	    {
	        cin>>a[i][j];
	    }
	}
	for (int i=0;i<3;i++)
	{
	    for(int j=0;j<3;j++)
	    {
	        if((i+j)%2==0)
	        {
	            sum1+=a[i][j];
	        }    
	        else
	        {
	            sum2+=a[i][j];
	        }
	        
	    }
	   
	}
 
		    cout<<sum1<<"\n"<<sum2;
 
}
