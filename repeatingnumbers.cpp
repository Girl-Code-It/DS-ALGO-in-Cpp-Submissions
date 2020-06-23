void printPatt(int n)
{   int start=1;
 int nsn=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<nsn;j++){
            if((start)>=10){
                start=1;
            }
            cout<<start;
            start++;
        }
        nsn*=2;
        cout<<endl;
    }
    //write your code here
}
