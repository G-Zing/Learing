#include <stdio.h>

int main ()

{
    int a,b,c,d,s = 0;

    printf("请输入四个整数");

    scanf("%d %d %d %d",&a,&b,&c,&d);

    int num[4]={a,b,c,d};

    int j = 0;

    int i = 0;

    while (num[0] > num[1]||num[1] > num[2]||num[2] > num[3]){

        j = 0;

    for (j = 0;j < 3;j++){

        if(num[j] > num[j+1]){

            s = num[j];

            num[j] = num[j+1];

            num[j+1] = s;
        }
    }

    }

    for(i = 0;i < 4;i++){
        printf("%d ",num[i]);
    }

    return 0 ;

}