#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int itr=1;
    char ch='A';
    while(n--){
        int inner_itr=itr;
        while(inner_itr--){
            cout<<ch;
        }
        cout<<endl;
        itr++;
        ch++;
    }
}
