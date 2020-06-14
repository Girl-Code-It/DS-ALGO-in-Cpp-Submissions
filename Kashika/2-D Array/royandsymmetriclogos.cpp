#include <iostream>

using namespace std;

int main() {
int t ;
    cin >> t ;
    while (t--)
    {
        int i,j,n ;
        cin >> n ;
        string arr[n] ;
        int flag=0;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        //checking symm. along X-axis
        for(i=0;i<n/2;i++)
        {
            string s = arr[i];
            string s1 = arr[n-i-1];
            for(j=0;j<n;j++)
            {
                if(s[j]!=s1[j])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            break;
        }
        
        for(i=0;i<n;i++)
        {
            string s = arr[i];
            for(j=0;j<n/2;j++)
            {
                if(s[j]!=s[n-j-1])
                {
                    flag=1;
                    break;
                }
            }
            if (flag==1)
            break;
        }
        if (flag==1)
        {
            cout << "NO\n";
           
        }
        else
        cout<<"YES\n" ;
    }
}
