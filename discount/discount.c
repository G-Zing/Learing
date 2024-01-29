#include <stdio.h>

int main()
{
    int a = 0;

    int discount = 0;

    double price = 0;

    scanf("%d %d",&a,&discount);

    if(a <= 10000 && (discount >= 1 && discount <= 9)){
        price = 0.1*a*discount;
    }

    printf("%.2f",price);

    return 0 ;
}