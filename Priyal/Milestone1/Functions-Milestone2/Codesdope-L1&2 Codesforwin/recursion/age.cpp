#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int is_leap(int yr){
	if(yr%4 == 0){
		if(yr%100 == 0 ){
			if(yr % 400 == 0){
				return 1;
			}
		}else{
			return 1;
		}
	}else{
		return 0;
	}
	
	return 0;
}

int which_month(int mon){
	if(mon== 1 || mon== 3 || mon== 5 || mon== 7 ||mon== 8 ||mon== 10||mon== 12){
		return 1;
	}else if(mon == 2){
		return 2;
	}
	else{
		return 0;
	}
	
}

void your_age(int b1,int m1,int d1, int current,int m2,int d2){
	int years, months, days=0;
	if(m2 > m1 || (m1==m2 && d2>d1) ){
		years= current - b1; 
	}else{
		years = current -b1 -1;
	}
	
	
	months = (current - b1)*12 + (m2 - m1);
	
	for(int i=b1;i<current;i++){
		if(is_leap(i)){
			days+=(366);
		}else{
			days+=(365);
		}
	}
	
	int m1_days=0,m2_days=0;
	for(int j=1;j<=m1;j++){
		if(which_month(j)){
			if(which_month(j) == 2){
				m1_days+=28;
			}else{
				m1_days+=31;
			}
		}else{
			m1_days+=30;
		}
	}
	
	for(int jj=1;jj<=m2;jj++){
		if(which_month(jj)){
			if(which_month(jj) == 2){
				m2_days+=28;
			}else{
				m2_days+=31;
			}
		}else{
			m2_days+=30;
		}
	}
	
	if(which_month(m1)==1){
		m1_days = m1_days - (31-d1);
	}else if(which_month(m1) == 2){
		m1_days = m1_days - (28-d1);
	}else{
		m1_days = m1_days - (30-d1);
	}
	
	
	if(which_month(m2)==1){
		m2_days = m2_days - (31-d2);
	}else if(which_month(m2) == 2){
		m2_days = m2_days - (28-d2);
	}else{
		m2_days = m2_days - (30-d2);
	}
	
	days = days + (m2_days - m1_days);
	
	cout<<"\n Age in years= "<<years<<" Age in months= "<<months<<" Age in days= "<<days;
}

int main(){

int b_d,b_m,b_y,c_d,c_m,c_y;

cout<<"Enter your birth day in yyyy/mm/dd :  ";
cin>>b_y>>b_m>>b_d;
cout<<"Enter current date in yyyy/mm/dd :  ";
cin>>c_y>>c_m>>c_d;


your_age(b_y,b_m,b_d,c_y,c_m,c_d);


    return 0;
}
