#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void rotateArr(vector<int> &v){        //function to rotate vectors
	int temp,size= v.size();
	
	for(int i=0;i<size;i++){
		if(i == 0){
			temp = v[i];
		}
		else{
			v[i-1] = v[i];
		}
	}
	v[size -1] = temp;	
//	cout<<"\nrotate:  ";
//	for(int p=0;p<size;p++){
//		cout<<v[p]<<" ";
//	}
}


int main(){

int n,x;
cin>>n;
vector<int> arr;
vector<int> ideal;

for(int p=0;p<n;p++){
	cin>>x;
	arr.push_back(x);
}
for(int pp=0;pp<n;pp++){
	cin>>x;
	ideal.push_back(x);
}

int j=0,count=0; 		// count = no of times rotation needed

while(arr.size()){
//	cout<<"\n arrsize= "<<arr.size();
	if(arr[j] != ideal[j]){
		rotateArr(arr);
		count++;
	}
	else{
		arr.erase(arr.begin() + j);
		ideal.erase(ideal.begin() + j);
	}
	
}

//cout<<"\n";
cout<<count+n;			// rotation needed + each task*1 

    return 0;
}
