
// Sample code to perform I/O:

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int sqre(int num){
	return pow(2,num);
}

int totalCharge(int n, int arr[]){
	int totalSubsets = sqre(n);
	int charge =0 , same = 1 , subs=0;
	sort(arr, arr+n);

	for(int i=0;i<n;i++){
		cout<<"\n i= "<<i;
		same =1; subs =0;
		for(int j=i+1;j<n;j++){
			cout<<"\n arr[i]= "<<arr[i]<<"  arr[j]= "<<arr[j];
			if(arr[i] == arr[j]){
				same++;
				i++;
			}else if(arr[j] > arr[i]){
				break;
			}
		}
		subs = sqre(n - same);
		cout<<"\n same= "<<same<<" subs= "<<subs;
		if(arr[i - same +1] >= (totalSubsets - subs) ){
			charge+=(arr[i - same + 1])*(same);
		}
		cout<<"\n charge= "<<charge;
	}
	return charge;
}

int main() {
	int t;
	cin >> t;										// Reading input from STDIN
	// cout << "Input number is " << num << endl;		// Writing output to STDOUT
while(t){
	int n; cin>>n; 
	int arr[n];

	for(int p=0;p<n;p++){
		cin>>arr[p];
	}

	cout<<totalCharge(n,arr)<<"\n";

	t--;
}

	return 0;
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail


// Write your code here

