#include<iostream>
#include <bits/stdc++.h>
using namespace std;


int main(){


int t; cin>>t;


int n;

while(t){
	
//	cin>>n;
	scanf("%d", &n);
	int arr[n];
	
	vector<int> what;
	vector<int> why;
	
	for(int p=0;p<n;p++){
//		cin>>arr[p];
		scanf("%d", &arr[p]);
		
		what.push_back(arr[p] + p);
		why.push_back(arr[p] - p);
	}
	
	sort(what.begin() , what.end());
	sort(why.begin(),why.end());
	
//	long long int result = max(what[n-1] - what[0] , why[n-1] - why[0] );
	
//	cout<<largest_thing(arr,n)<<"\n";
//	printf("%ld \n" ,largest_thing(arr,n) );
	printf("%ld \n", max(what[n-1] - what[0] , why[n-1] - why[0]) );
	
	t--;
}

    return 0;
}
