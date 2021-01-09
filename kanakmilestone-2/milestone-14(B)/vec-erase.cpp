#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
     int n,a,b,c;
     cin>>n;
     vector<int>vec;
     for(int i=0;i<n;i++)
     {cin>>a;
     vec.push_back(a);
     }
     cin>>a;
     vector<int>::iterator itr;
    cin>>b>>c;
    vec.erase(vec.begin()+(a-1));
    vec.erase(vec.begin()+(b-1),vec.begin()+(c-1));
    cout<<vec.size()<<endl;
    for(itr=vec.begin();itr!=vec.end();itr++)
    cout<<*itr<<" ";
    return 0;
}
