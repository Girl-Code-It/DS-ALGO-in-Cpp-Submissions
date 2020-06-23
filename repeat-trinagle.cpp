  
void printPatt(int n)
{
    int nsn=n*2;
    int nsp=0;
    char ch='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<nsp;j++){
            cout<<" ";
        }
        for(int j=0;j<nsn/2;j++){
            cout<<ch;
            ch++;
        }
        for(int j=0;j<nsn/2;j++){
            cout<<--ch;
        }
       cout<<endl;
        nsn-=2;
        nsp++;
    }
    //write your code here
}
