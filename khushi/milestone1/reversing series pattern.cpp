#include<iostream>
using namespace std;

int main()
{
    int i, j, count, value, N;
    scanf("%d", &N);

    count = 0;

    for(i=1; i<=N; i++)
    {
        value = (i & 1) ? (count + 1) : (count + i);

        for(j=1; j<=i; j++)
        {
            cout<<value;
            if(i & 1)
                value++;
            else
                value--;

            count++;
        }

        printf("\n");
    }

    return 0;
}
