#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,num,no;
	cin>>n;
    num=1;
	for(int i=0;i<n;i++)
	{  
	    if(i%2!=0)
	    {   no=num+i;
	        for(int j=0;j<=i;j++)
    	        {cout<<no--<<" ";
    	            num++;
    	        }
	    }else{
    	    for(int j=0;j<=i;j++)
    	        cout<<num++<<" ";
	    }
	    
	    cout<<""<<endl;
	}
	return 0;
}
