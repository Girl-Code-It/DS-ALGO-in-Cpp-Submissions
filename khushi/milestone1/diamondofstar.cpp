#include<iostream>
using namespace std;


int main(){
    
int n, num,c, k, space = 1;
  cout<<"\n\nEnter number of rows: ";
  cin>>n;
  space = n/2 + 1;
 
  for (k = 1; k<=n/2+1; k++)
  {
    for (c = 1; c<=space; c++)
      cout<<" ";
 
    space--;
 
    for (c = 1; c<= 2*k-1; c++)
      cout<<"*";
 
    cout<<"\n";
  }
 
  space = 1;
 
  for (k = n/2+1; k<= n; k++)
  {
    for (c = 0; c<= space; c++)
      cout<<" ";
 
    space++;
 
    for (c = 1 ; c<= (2*(n-k))-1; c++)
      cout<<"*";
 
    cout<<"\n";
  }
    return 0;
}


