 #include<bits/stdc++.h>
    using namespace std;
    #define ll long long int
    int main()
    {
        string s[100] ;
        int n , m , i ,j;
        cin>>n>>m;
        for(i=0 ; i<n ;i++)
        {
            cin>>s[i];
            
        }
        int cnt=0;
     
        for(i=0 ; i<n; i++)
        {
            for(j=0 ; j<m-3; j++)
            {
                if( s[i][j]=='s' && s[i][j+1]=='a' && s[i][j+2]=='b' && s[i][j+3]=='a')
                {
                    cnt++;
                }
            }
        }
        for(i=0 ; i<m; i++)
        {
            for(j=0; j<n-3 ; j++)
            {
                if(s[j][i]=='s' && s[j+1][i]=='a' && s[j+2][i]=='b' && s[j+3][i]=='a')
                {
                    cnt++;
                }
            }
        }
        for (i=0 ; i<n; i++)     
        {
            for (j=0 ;j<m ;j++)
            {
                if (s[i][j]=='s' && s[i+1][j+1]=='a' && s[i+2][j+2]=='b' && s[i+3][j+3]=='a')
                {
                    cnt++;
                }
            }
        }
        for (i=n-1; i>2; i--)
        {
            for (j=0; j<m; j++)
            {
                if (s[i][j]=='s' && s[i-1][j+1]=='a' && s[i-2][j+2]=='b' && s[i-3][j+3]=='a')
                {
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
        
    	return 0;
    }
