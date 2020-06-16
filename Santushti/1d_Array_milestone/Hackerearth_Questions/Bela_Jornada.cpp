#include <iostream>
using namespace std;

int main() {

    long long int n, s1 = 0, sum = 0, a[n];
    
    cin>>n;
    
    for(int i = 0; i < n; ++i) {

        cin>>a[i];
        
        sum += a[i];
    }
  
  long long int max = 0;
  
    for(int i = 0; i < n; ++i) {

        s1 += a[i];
   
        long long p = s1*(sum-s1);
   
        if(p > max) {
            
            max = p;
        }
    }
    cout<<max;
    
    return 0;
}
/*

SAMPLE INPUT
------------
5
1 2 3 4 5

SAMPLE OUTPUT
-------------
54

*/
