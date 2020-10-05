#include <bits/stdc++.h>
using namespace std;
void inv_pyramid(int n){
   int i, j, num, gap;
   for (i = n; i >= 1; i--) {
      for (gap = n - 1; gap >= i; gap--) {
         cout<<" ";
      }
      num = 'A';
      for (j = 1; j <= i; j++) {
         cout << (char) num++;
      }
      for (j = i - 1; j >= 0; j--) {
         cout << (char) --num ;
      }
      cout<<"\n";
   }
}
int main(){
   int n ;
   cin>>n;
   inv_pyramid(n);
   return 0;
}
