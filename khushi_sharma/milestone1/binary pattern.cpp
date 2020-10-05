 #include<iostream>
using namespace std;
void printPatt(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=i;j--)
        {
            if(i%2==0)
                cout<<0;
            else
                cout<<1;
    
  }
        cout<<"\n";
    
}
}
int main(){
	int n;
	cin>>n;
	printPatt(n);
	}
