/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{   
    long long int n,count;
    count=0;
    cin>>n;
    do{
        count=0;
        while(n)
    {
        n=n&(n-1);
        count++;
    }
    cout<<count<<endl;

    cin>>n;
    }while(n);
    return 0;
}
