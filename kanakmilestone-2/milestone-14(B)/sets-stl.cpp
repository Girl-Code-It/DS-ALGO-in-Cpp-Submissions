#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
   long int q,i;
   long long int y;
   int x;
   set<long long int > s;
   set<long long int>::iterator itr;
    cin>>q;
    for(i=0;i<q;i++)
    {
        cin>>x>>y;
        if(x==1)
        {
            s.insert(y);
        }
        else 
        {
        itr=s.find(y);
        if(x==2)
        {if(itr!=s.end())
            s.erase(y);
        }else {
         if(itr!=s.end())
         cout<<"Yes"<<endl;
         else
         cout<<"No"<<endl;
        }
        }
    }
    return 0;
}



