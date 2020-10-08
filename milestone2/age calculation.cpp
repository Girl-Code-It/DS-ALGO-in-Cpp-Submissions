#include <cstdlib>
#include <iostream>

using namespace std;
int leapcheck(int x){
	if(x%4==0 && x%100!=0)
	return 1;
    else if(x%400==0)
    return 1;
    else
    return 0;
}

int main()
{   int YYYY,MM,DD,l;
    cout<<"Enter your date of birth:"<<endl;
    cin>>YYYY>>MM>>DD;
    cout<<"Enter today's date"<<endl;
    int YYYYY,MMM,DDD;
    cin>>YYYYY>>MMM>>DDD;
    if (MM=MMM && (DDD>=DD)){
	cout<<"age in years:"<<YYYYY-YYYY<<endl;
    cout<<"Age in Months is:"<<((YYYYY-YYYY)*12)<<endl;}
    else if(MM<MMM){cout<<"age in years: "<<YYYYY-YYYY-1<<endl;
    cout<<"Age in Months is:"<<((YYYYY-YYYY)*12)-MM+MMM<<endl;}
    l=leapcheck(YYYYY);
	if(l==1)
	cout<<"leap year";
	else if(l==0)
	cout<<"not a leap year";
     return 0;
}

