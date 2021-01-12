#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,a,b;
    cin>>n;
    vector<int>vec;
   vector<int>::iterator itr;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        vec.push_back(a);
    } 
    cin>>a;
    for(int i=0;i<a;i++)
    {
        cin>>b;
        int flag=1;
     itr=lower_bound(vec.begin(),vec.end(),b);
     //cout<<n;
     flag=*(itr);
        if(flag==b)
        cout<<"Yes "<<itr-vec.begin()+1<<endl;
        else
        cout<<"No "<<itr-vec.begin()+1<<endl;
        
    }
    return 0;
}
