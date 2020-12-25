#include<iostream>
#include <bits/stdc++.h>
using namespace std;

string check_guess(string &msg,string &guess, int len1,int len2){
	
	if(len2 > len1){
		return "NO";
	}
	
	int i=0,j=0, count= -1;
	
	while(j<len2){
		if(guess[j] == msg[i]){
			i++; j++;
			count = 1;
		}
		else{
			if(i == len1 - 1){
				count = -1;
				break;
			}
			else{
				i++;
			}
		}
		
	}
	
	if(count == 1){
		return "YES";
	}else{
		return "NO";
	}
	
}


int main(){

string s1,s2;

getline(cin,s1);  //input with space as string
getline(cin,s2);

int a=-1,b=-1;

while(1){ 			// removing spaces from strings
	a= s1.find(" ");
	if(a!= -1){
		s1.erase(a,1);
	}
	b= s2.find(" ");
	if(b != -1){
		s2.erase(b,1);
	}
	
	if(a== -1 && b==-1){
		break;
	}	
}

int len1= s1.length();		
int len2= s2.length();

for(int p=0;p<len1;p++){		//coverting all to lower case
	s1[p]= tolower(s1[p]);
}

for(int pp=0;pp<len2;pp++){
	s2[pp] = tolower(s2[pp]);
}

sort(s1.begin(),s1.end());  	//sorting so to not get repeating letter counted twice
sort(s2.begin(),s2.end());

cout<<check_guess(s1,s2,len1,len2);

//cout<<"\n s1= "<<s1<<"  s2= "<<s2;
//cout<<"\n len "<<len1<<"\n"<<len2;

    return 0;
}
