#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str="";
    for(int i=0;i<n;i++){
        str+=to_string(n);
    }
    int itr=0;
    while(n--){
         for(int i=0;i<itr;i++){
             int num=str[i]-'0';
             num--;
            str[i]=num+'0';
        }
        cout<<str<<endl;
        itr++;  
    }
