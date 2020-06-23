void printPatt(int n)
{ 
    int nsn=1;
    int nsp=n;
    for(int j=0;j<=n;j++){
        int start=j;
        for(int i=0;i<nsp;i++){
            cout<<" ";
        }
        int fhalf=j;
        for(int i=0;i<nsn;i++){
            if(i<(nsn/2)){
                cout<<start;
                start--;
            }
            if(i==(nsn/2)){
                cout<<0;
                start=0;
            }
            if(i>(nsn/2)){
                                start++;

                cout<<start;
            }
        }
        cout<<endl;
        nsn+=2;
        nsp--;
    }
    //write your code here
}
© 2020 GitHub, Inc.
