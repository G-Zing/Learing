#include <stdio.h>

int main()

{
    int x ;

    x = 2;

    int i = 2;

    int isprime = 1;



    while (x<101)

    { 
        

        for(i = 2 ; i < x ; i++)
    {
        if(x % i == 0){
            isprime = 0;
        }
     }
      if (isprime == 1){
        printf("%d\n",x);
    }
    x++;

    isprime = 1;
}

return 0 ;
}
    