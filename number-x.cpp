void printPatt(int n)
{ int num=n*2-1;
  int nsp=n*2-3;
 int ssp=0;
 int itr=1;
 for(int i=0;i<(num/2);i++){
     for(int j=0;j<ssp;j++){
         cout<<" ";
     }
     cout<<itr;
     for(int j=0;j<nsp;j++){
         cout<<" ";
     }
     cout<<itr;
     cout<<endl;
     itr++;
     ssp++;
     nsp-=2;
 }
 for(int j=0;j<=ssp;j++){
         cout<<" ";
 }
 cout<<itr<<endl;
 ssp-=2;
 nsp+=2;
 itr--;
 for(int i=(num/2+1);i<(num);i++){
     for(int j=0;j<=ssp;j++){
         cout<<" ";
     }
     cout<<itr;
     for(int j=0;j<nsp;j++){
         cout<<" ";
     }
     cout<<itr;
     cout<<endl;
     itr--;
     ssp--;
     nsp+=2;
 }
    //write your code here
}
