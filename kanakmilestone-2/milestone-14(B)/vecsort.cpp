#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   long int n,ii;
   long long int a;
   cin>>n;
   vector<int>vec;
   for(ii=0;ii<n;ii++)
   {
       cin>>a;
       vec.push_back(a);
   }
   sort(vec.begin(),vec.end());
    for(ii=0;ii<n;ii++)
   {
       cout<<vec[ii]<<" ";
   }
    return 0;
}
