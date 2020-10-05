
#include<bits/stdc++.h> 
 using namespace std;  
void printDiamond(int n)  
    {  
        cout<<endl;  
        int i, j = 0;  
        for (i = 0; i < n; i++) {   
            for (j = i; j < n; j++)  
                cout<<"*";    
            for (j = 0; j < 2 * i + 1; j++)  
                cout<<" ";   
            for (j = i; j < n; j++)  
                cout<<"*";  
    
            cout<<endl;  
        }   
        for (i = 0; i < n - 1; i++) {  
            for (j = 0; j < i + 2; j++)  
                cout<<"*";  
            for (j = 0; j < 2 * (n - 1 - i) - 1; j++)  
                cout<<" ";   
            for (j = 0; j < i + 2; j++)  
                cout<<"*";  
    
            cout<<endl;  
        }  
    
        cout<<endl;  
    }    
    int main()  
    {  
        int n ;  
        cin>>n; 
        printDiamond(n/2+1);  
    } 
