#include <stdio.h>

int main()
{
    int i = 1;

    int f = 1;

    int n;

    scanf("%d",&n);

    while(i<n){

        f=f*i;

        i++;
    }

    printf("%d!=%d\n",n,f);

    return 0;
}