
#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int nsn=1;
    int nsp=0;
    for(int j=0;j<=(n/2);j++){
        for(int i=0;i<nsp;i++){
            cout<<" ";
        }
        for(int i=0;i<nsn;i++){
            cout<<"*"<<" ";
        }
        nsp++;
        nsn++;
        cout<<endl;
    }
    nsp-=2;
    nsn-=2;
for(int j=(n/2);j<(n);j++){
        for(int i=0;i<nsp;i++){
            cout<<" ";
        }
        for(int i=0;i<nsn;i++){
            cout<<"*"<<" ";
        }
        nsp--;
        nsn--;
    cout<<endl;
    }
       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  
}
