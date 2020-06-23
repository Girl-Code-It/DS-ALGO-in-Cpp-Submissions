void printPatt(int n)
{
   int nsn=1;
    for(int i=0;i<n;i++){
        if(i%2==0){
            if(i!=0)
            nsn++;
            for(int k=0;k<=i;k++){
                cout<<nsn<<" ";
                nsn++;
            }
        }
        else{
            int s_itr=nsn+i;
            nsn=s_itr;
            for(int k=0;k<=i;k++){
                cout<<s_itr<<" ";
                s_itr--;
            }
        }
        cout<<endl;
    }
    //write your code here
}
