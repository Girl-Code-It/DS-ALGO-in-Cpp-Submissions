#include <bits/stdc++.h>
using namespace std;

int main() {

  long long t;
  
  cin>>t;
  
  while(t--) {

    long long int n;
    
    cin>>n;
  
    long long s[n], x = 1;
  
    for(int j = 0; j < n; ++j) {
      
      cin>>s[j];
    }
    for(int j = 0; j < n-1; ++j) {

      if(s[j] > s[j+1]) {
        
        x++;
      }

      else {
        
        s[j+1]=s[j];
      }
    }
  
    cout<<x<<"\n";
  
  }
  return 0;
}
