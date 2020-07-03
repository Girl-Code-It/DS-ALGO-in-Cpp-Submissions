
#include <iostream>

using namespace std;

int main() {
	long int t;
	cin>>t;
	while(t--)
	{
		int n,m,i,j,sx,sy,dx,dy;
		cin>>n>>m;
		cin>>sx>>sy;
		cin>>dx>>dy;
		int flag;
				if(n%2==0)
				flag=0;
				else
				flag=1;
		if(sx==dx&&sy==dy)
		{
			if(sy==1)
			cout<<"Right"<<endl;
			else
			cout<<"Left"<<endl;
		}else{
			if(sy==1&&sx==1)
			{	if(dx==n&&dy==m&&flag==1)
				   cout<<"Over"<<endl;
				  else if(dx==n&&dy==1&&flag==0)
				   cout<<"Over"<<endl; 
				else if(dx%2==1)
				{
					if(dy==m)
					cout<<"Back"<<endl;
					else
					cout<<"Right"<<endl;
				}else{
					if(dy==1)
					cout<<"Back"<<endl;
					else
					cout<<"Left"<<endl;
				}

			}else if(sy==m&&sx==1)
			{	if(dx==n&&dy==1&&flag==1)
				   cout<<"Over"<<endl;
				   else if(dx==n&&dy==m&&flag==0)
				   cout<<"Over"<<endl;
				else if(dx%2==1)
				{
					if(dy==1)
					cout<<"Back"<<endl;
					else
					cout<<"Left"<<endl;
				}else{
					if(dy==m)
					cout<<"Back"<<endl;
					else
					cout<<"Right"<<endl;
				}

			}else if(sy==1&&sx==n)
			{	
				 if(flag)
				{	if(dx==1&&dy==m)
				   cout<<"Over"<<endl;
				else if(dx%2==1)
					{
						if(dy==m)
						cout<<"Front"<<endl;
						else
						cout<<"Right"<<endl;
					}else{
						if(dy==1)
						cout<<"Front"<<endl;
						else
						cout<<"Left"<<endl;
					}
				}else{
					if(dx==1&&dy==1)
				   cout<<"Over"<<endl;
				else if(dx%2==1)
					{
						if(dy==1)
						cout<<"Front"<<endl;
						else
						cout<<"Left"<<endl;
					}else{
						if(dy==m)
						cout<<"Front"<<endl;
						else
						cout<<"Right"<<endl;
					}
				}
			}else{
				
				 if(flag)
				{
					if(dx==1&&dy==1)
				   cout<<"Over"<<endl;
				else if(dx%2==1)
					{
						if(dy==1)
						cout<<"Front"<<endl;
						else
						cout<<"Left"<<endl;
					}else{
						if(dy==m)
						cout<<"Front"<<endl;
						else
						cout<<"Right"<<endl;
					}
				}else{
					if(dx==1&&dy==m)
				   cout<<"Over"<<endl;
				else if(dx%2==1)
					{
						if(dy==m)
						cout<<"Front"<<endl;
						else
						cout<<"Right"<<endl;
					}else{
						if(dy==1)
						cout<<"Front"<<endl;
						else
						cout<<"Left"<<endl;
					}
				}
			}
		}
	}
	return 0;
}
