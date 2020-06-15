#include <iostream>
using namespace std;

int main() {

  long long n, d;
  
  cin>>n>>d;
  
  long long a[n];
  
  for(int i = 0; i < n; ++i) {
    
      cin>>a[i];
  }
  for(int i = 0; i < n; ++i) {
    
      cout<<a[(d + i)%n]<<" ";
  }
  return 0;
}
/*

SAMPLE INPUT
------------
5 4
1 2 3 4 5

SAMPLE OUTPUT
-------------
5 1 2 3 4

*/
