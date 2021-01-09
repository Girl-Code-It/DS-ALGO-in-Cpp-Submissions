#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long int q,j,i;
    cin>>q;
    int marks;
    map< string, int> m;
    map<string ,int>:: iterator itr;
    string name;
    for(i=0;i<q;i++)
    {
        cin>>j;
        cin>>name;
        if(j==1){
            
            itr=m.find(name);
            cin>>marks;
            if(itr!=m.end())
             m[name]+=marks;
             else {
             m.insert(pair<string, int>(name,marks));
             }
        }
        else if(j==2)
        {
            m.erase(name);
        }
        else
        {
            cout<<m[name]<<endl;
        }
    }
    return 0;
}



