#include<iostream>
using namespace std;

void table(int x, int y)
{
    if(y != 1)
    {
      table(x,y-1);
    }
    cout << x*y << "\n";
}


int main()
{
	int num; cin>>num;
    table(num,10);

    return 0;
}	
