 #include<iostream>
 using namespace std;
 int main(){
int rows;
 cin>>rows;
        for (int i=1; i<=rows; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout<<"*";
            }
            for (int k = i*2; k <= rows*2-1; k++)
            {
                cout<<" ";
            }
            for (int l = 1; l <=i; l++)
            {
                cout<<"*";
            }
            cout<<"\n";
        }
        
        for (int i=1; i<=rows-1; i++)
        {
            for (int j = rows-1; j >=i; j--)
            {
                cout<<"*";
            }
            for (int k = 1; k <=i*2; k++)
            {
                cout<<" ";
            }
            for (int l = rows-1; l >= i; l--)
            {
            cout<<"*";
            }
            
           cout<<"\n";
        }
        return 0;
    }
