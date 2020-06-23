void printPatt(int n)
{ int nsn=n;
  int nsp=0;
 for(int i=0;i<n;i++){
     for(int j=0;j<nsp;j++){
         cout<<" ";
     }
     for(int i=0;i<nsn;i++){
         cout<<"*";
     }
     nsn--;
     nsp++;
     cout<<endl;
 }
    //write your code here
}
