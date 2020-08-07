/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int rec_bin_search(int l,int r,int *a,int num)
{int mid=(l+r)/2;
    if(a[mid]==num)
    return 1;
    else if(a[mid]>num)
    return rec_bin_search(l,mid-1,a,num);
    else
    return rec_bin_search(mid+1,r,a,num);
    
}
int main()
{
    int t,i;
    cin>>t;
    int a[t];
    i=0;
    while(i<t)
    {
        cin>>a[i];
        i++;
    }
    int num;
    cin>>num;
    int ans=0;
    
    ans=rec_bin_search(0,t-1,a,num);
    if(ans)
    cout<<"Element found "<<num<<endl;
    else
    cout<<"Element not found "<<num<<endl;
    return 0;
}
