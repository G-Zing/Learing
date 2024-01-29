#include <stdio.h>  
int main()  
{
   int x = 0;  
   
   int b; //b 是 x 的位数；  
   scanf("%d", &x); 
    
   int a[10] = {0};  
   b = 1;  
   while (x > 0&b < 10) {  
       a[x % 10]++;  
       x /= 10;  
       b++;  
   }  
   for (int i = 0; i < 10; i++) {  
       printf("%d:%d\n", i, a[i]);  
   }  
   return 0;  
}
