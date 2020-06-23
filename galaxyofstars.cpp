void printPatt(int n)
{
    int nsn=1;
    for(int j=0;j<=n/2;j++){
        for(int i=0;i<nsn;i++){
            cout<<"*";
        }
        cout<<endl;
        nsn++;
    }
    nsn-=2;
    if(n%2!=0)
    for(int j=n/2+1;j<n;j++){
        for(int i=0;i<nsn;i++){
            cout<<"*";
        }
        nsn--;
        cout<<endl;
    }
    else
         for(int j=n/2+1;j<=n;j++){
        for(int i=0;i<nsn;i++){
            cout<<"*";
        }
        nsn--;
        cout<<endl;
    }
    //write your code here
}
