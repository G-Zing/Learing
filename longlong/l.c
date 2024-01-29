#include <stdio.h>
int main(void)
{
    
int N=0;

    scanf("%d",&N);

    unsigned long long a[N][3];

    int j,i=0;

    for(i=0;i<N;i++){

            for(j=0;j<3;j++){

                scanf("%llu",&a[i][j]);
                 }
      }
    int n=0;

    scanf("%d",&n);

    int b[n];

    for(i=0;i<n;i++){

        scanf("%d",&b[i]);
        
    }
        for(j=0;j<n;j++){

            for(i=0;i<N;i++){

                if(b[j]==a[i][1]){

                    printf("%llu %llu\n",a[i][0],a[i][2]);
                }
            }
        }
return 0;
}
