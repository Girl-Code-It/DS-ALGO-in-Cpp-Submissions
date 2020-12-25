#include<bits/stdc++.h>
using namespace std;
int main(){
 int n;
 cin>>n;
 int nsn=1;
 if(n%2!=0){
 for(int i=0;i<=n/2;i++){
   for(int j=0;j<n;j++){
       cout<<nsn<<" ";
       nsn++;
   }
   cout<<endl;
   nsn+=n;
 }
 int itr=1;
nsn-=n;
 for(int j=(n/2+1);j<n;j++){
    int start=(nsn-(itr*2*n));
    for(int k=0;k<n;k++){
        cout<<start<<" ";
        start++;
    }
    itr++;
    cout<<endl;
 }}
else{
    for(int i=0;i<n/2;i++){
   for(int j=0;j<n;j++){
       cout<<nsn<<" ";
       nsn++;
   }
   cout<<endl;
   nsn+=n;
 }
int itr=0;
nsn-=n;
 for(int j=(n/2);j<n;j++){
    int start=(nsn-(itr*2*n));
    for(int k=0;k<n;k++){
        cout<<start<<" ";
        start++;
    }
    itr++;
    cout<<endl;
 }
}
}
