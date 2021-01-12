  
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
    cin>>n;
    int nsp=(n-1);
    int nsn=1;
    for(int j=1;j<=n;j++){
        for(int k=0;k<nsp;k++){
            cout<<" ";
        }
        int start=j;
        for(int j=0;j<(nsn);j++){
            if(j<(nsn/2)){
                cout<<start<<"";
                start++;
            }
            if(j==(nsn/2)){
                cout<<start<<"";
                start--;
            }
            if(j>(nsn/2)){
                cout<<start<<"";
                start--;
            }
        }
        cout<<endl;
        nsp--;
        nsn+=2;
    }
}
