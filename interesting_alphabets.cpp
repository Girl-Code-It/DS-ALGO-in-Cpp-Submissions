#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char ch='A'+n;
    char prev_char=ch;
    int nsn=1;
    for(int i=0;i<=n;i++){
        char itr=ch-i;
        while(itr!=ch){
            cout<<itr;
            itr++;
        }
         cout<<endl;
    }
}
