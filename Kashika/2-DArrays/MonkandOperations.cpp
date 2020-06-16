
#include <iostream>

using namespace std;

int main() {
	long N,M,A[1000][1000],v1,v2,v3,v4,sumnr,sumnc,sumt=0,sumr=0,sumv1,sumv2,sumv3,sumv4,sumc=0;
    cin>>N>>M;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            cin>>A[i][j];
            sumt+=abs(A[i][j]);
        }
    }
    cin>>v1>>v2>>v3>>v4;
    for(int i=0;i<N;i++)
    {
        sumv1=0; sumv2=0; sumnr=0;
         for(int j=0;j<M;j++)
         {
             sumv1+=abs(A[i][j]+v1);
         }
         
         for(int j=0;j<M;j++)
            sumnr+=abs(A[i][j]);
            sumv2=abs(M*v2);
         
         if(sumv1>sumv2&&sumv1>sumnr)
            sumr+=sumv1;
        else if(sumv2>sumnr)
        sumr+=sumv2;
        else sumr+=sumnr;
    }
    for(int i=0;i<M;i++)
    {
        sumv3=0; sumv4=0; sumnc=0;
         for(int j=0;j<N;j++)
         {
             sumv3+=abs(A[j][i]+v3);
         }
         for(int j=0;j<N;j++)
         {
             sumnc+=abs(A[j][i]);
         }
         sumv4=abs(N*v4);
         if(sumv3>sumv4&&sumv3>sumnc)
            sumc+=sumv3;
        else if(sumv4>sumnc) sumc+=sumv4;
        else sumc+=sumnc;
    }
   
    if(sumr>sumc&&sumr>sumt) cout<<sumr;
    else if(sumc>sumt) cout<<sumc;
    else cout<<sumt;

return 0;
}
