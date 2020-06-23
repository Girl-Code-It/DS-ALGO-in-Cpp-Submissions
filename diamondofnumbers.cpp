void printPatt(int n)
{
    int nsn=1;
    int nsp=n/2;
    for(int j=0;j<=(n/2);j++){
        for(int i=0;i<nsp;i++){
            cout<<" ";
        }
        for(int i=0;i<nsn;i++){
            cout<<i+1;
        }
        nsn+=2;
        nsp--;
        cout<<endl;
    }
    nsn-=4;
    nsp+=2;
    for(int j=(n/2);j<n;j++){
       for(int i=0;i<nsp;i++){
          cout<<" "; 
       } 
        for(int i=0;i<nsn;i++){
            cout<<i+1;
        }
        cout<<endl;
        nsn-=2;
        nsp++;
    }
    //write your code here
}
