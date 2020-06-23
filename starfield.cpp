void printPatt(int n)
{
   int i,j; 
   for(int i=0;i<n;i++){
       for(int j=0;j<=2*(n-1);j++){
           if((i+j)<(2*(n-1)) && (i<j)){
               cout<<" ";
           }
           else if((i+j)%2!=0){
               cout<<" ";
           }
           else{
               cout<<"*";
           }
       }
       cout<<endl;
   }
    for(int i=n-2;i>=0;i--){
        for(int j=0;j<=(2*(n-1));j++){
            if(j>i && (i+j)<2*(n-1)){
                cout<<" ";
            }
            else if((i+j)%2!=0){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    
}
