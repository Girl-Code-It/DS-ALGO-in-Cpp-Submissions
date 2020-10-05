#include<iostream>
using namespace std;
int main(){
	int rows;
	cin>>rows;
		for (int i = rows; i >= 0; i--) 
		{ 
			int alphabet = 65; 
			
			for (int k = i; k < rows; k++) 
			{ 
				cout<<(char)(alphabet + k) <<" "; 
			}  
			cout<<"\n";
}
	return 0;
}
