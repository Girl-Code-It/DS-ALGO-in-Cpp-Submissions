#include<iostream>
using namespace std;
int main()
{
int a[3][3],s1=0,s=0;

for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        cin>>a[i][j];
         
         s+=a[i][j];
         
         if((i+j)%2==0)
         s1+=a[i][j];
         
    }
    
}

   cout<<s1<<"\n";
   cout<<s-s1;


return 0;

}
