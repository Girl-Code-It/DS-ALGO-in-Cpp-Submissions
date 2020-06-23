  

void printPatt(int n)
{
    int xorr=1;
    int nsn=n;
    for(int i=0;i<n;i++){
        if(xorr==1){
            for(int k=0;k<nsn;k++){
                cout<<1;
            }
        }
        else{
            for(int k=0;k<nsn;k++){
                cout<<0;
            }
        }
        xorr^=1;
        nsn--;
        cout<<endl;
    }
    //write your code here
}
