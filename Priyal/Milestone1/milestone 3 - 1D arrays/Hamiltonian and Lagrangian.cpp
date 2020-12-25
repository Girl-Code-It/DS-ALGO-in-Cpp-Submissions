#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void greaterRight(int arr[],int n){
	int m_left = 0, m_r=1;  // m_left : marks fron left | m_r : marks from right
	vector<int> v;
	
	while(m_r < n && m_left<=n-2){
//		cout<<"\n I    m_left= "<<m_left<<"  m_r="<<m_r;
		if(arr[m_left] < arr[m_r] ){
			m_left++;
			m_r = m_left +1;
		}
		else{
//			cout<<"\n**";
			if(m_r == n-1){
				v.push_back(arr[m_left]);
				m_left++;
				m_r = m_left +1; continue;
			}	
			m_r++;
		}
//		cout<<"\n II    m_left= "<<m_left<<"  m_r="<<m_r;
	} 
	v.push_back(arr[n-1]);
//	cout<<"\n\n";
	for(int x=0;x<v.size();x++){
		cout<<v[x]<<" ";
	}
	
	
}


int main(){

int n;
cin>>n;
int arr[n];
for(int p=0;p<n;p++){
	cin>>arr[p];
}
greaterRight(arr,n);
    return 0;
}
