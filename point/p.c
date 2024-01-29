  /*
   int i = 6;    

   int* p = &i;    

   printf("%d %p\n", i, p);    

   printf("%d %d\n", i, &i);    

   return 0;    */


   /*int num[4]={5,25,9,13};

   printf("%d,%d,%d,%d\n",&num[0],&num[1],&num[2],&num[3]);

   int*ptr = &(num[0]);

   printf("%d,%p\n",ptr,ptr);

   printf("%d\n",num);  //数组的名字就是数组的首地址

    return 0;*/

    /*int num[4]={5,25,9,13};  指针的移动

     int*p = num;

     printf("%d\n",*p);
     
     p++;  //因为p是int类型的指针，所以p++向后移动4个字节

     //p-- 同 理 

     printf("%d\n",*p);

     p = p + 2;

     printf("%d\n",*p);

     return 0; */

     //作用之一

   /*  char s1[] = "I Love You!";

     char*p = s1;

     p = p + 2;

     printf("%s\n",s1);

     printf("%s\n",p);

     p--;

     printf("%s\n",p);//比上一个多了个空格

     return 0 ;*/

     //同类型指针相减，得出的结果是相距的数据类型的个数，只有同类型指针加减才有意义

     //计算机不知道什么是数据类型，只是根据类型取字长

     /*int i = 88888888; c语言中，不能直接打印出二进制数

     int *p1 = &i;

     short*p2 = &i;

     printf(" %d\n%d\n",*p1,*p2);

     return 0;*/

    /* int i = 88888888;

     char*p = &i;

     printf("%d,%d,%d,%d\n",p[0],p[1],p[2],p[3]);

     printf("%d,%d,%d,%d\n",*(p),*(p+1),*(p+2),*(p+3));

     return 0;
     */

    /*seizeof（）,算有多少个字节，在编译时运行*/


    /*int a[]={5,25,9,13};

    printf("%d月%d日\n",a[0],a[1]);

    printf("%d月%d日\n",*(a+2),*(a+3));

    return 0 ;*/

    //数组变量本身表达地址，所以
    //int a[10];int*p = a;  无需用&取地址
    //但是数组的单元表达的是变量，需要用&取地址
    //a == &a[0],(a+2) == &a[2]
    //[]运算符可以对数组做，也可以对指针做
    //*运算符可以对指针做也可以对数组做
    //数组是const指针
    /*const指针，表示一旦得到某个变量的地址，不能再指向其他变量

    int* const q = &i;
    *q = 25;
    q++;//ERROR

    如果指针所指i的是const，不能通过指针给i赋值
    const int*p = &i;
    *p = 25;//ERROR
    i = 25;//OK
    p = &j;//OK
    注意： const int*p = &i;这种写法中“i”不是const
    const int*p ==int const*p
    int *const p

    可以把一个非const的值转化成const

    const int a[] = {5,25,9,13};
    数组变量已经是const的指针了,这里的const表示数组里每个单元都是const
    所以必须初始化赋值

    */

   //指针的运算，是指针的移位，指针+1指的是下一个加上这个指针类型的字节，
   //就是下一个该类型的首地址，但是这种用法如果不是指向连片的数，这样用似乎没啥用用
   //指针相减：
   /*
   *p++，++的优先级在*之前，p++的结果是p++之前的数，
   所以：取出p所指的那个数据，然后把他放在下一个位置上
   */
  //动态内存分配
  /*
  用malloc，要用#include <stdilb.h>
  c99可以:
  int nmber;
  int a[number]
  不是c99:
  向malloc申请的空间是以字节为单位的，返回值是void*，需要类型转换为自己需要的类型
  （int*）malloc(n*sizeof(int)),最后free(a)
  */
 
/*void*p;
 int cnt = 0;

 while((p = malloc(100*1024*1024))){cnt++;}//如果（p = malloc(100*1024*1024)）括号里的

 //数值大于0，程序继续运行
 printf("分配了%d00M的空间\n",cnt);

 return 0;*/

 /*free，申请的空间要还给系统，而且只能还申请来的空间的首地址
 
 */
/*
int a[10]={0};
int i,x=0;
 
scanf("%d",&x);

for(i=0;i<10&&x>0;i++){
a[x%10]++;
x=(x/10);
}
for(i=0;i<10;i++){
    if(a[i]!=0){
        printf("%d:%d\n",i,a[i]);
        }
        }
return 0;
}*/
/*
    int N=0;
    int num=1;
    scanf("%d%n",&N,&num);
    int a[N][3];
    int j,i=0;
    for(i=0;i<N;i++){
            for(j=0;j<3;j++){
                scanf("%d ",&a[i][j]);
              
                 }
      }
    int n=0;
    scanf("%d%n",&n,&num);
    int b[n];
    for(i=0;i<n;i++){
        scanf("%d",&b[i]);
        if(i<n-1){printf("%c",' ');}
    }
        for(i=0;i<N;i++){
            for(j=0;j<n;j++){
                if(b[j]==a[i][1]){
                    printf("%d %d\n",a[i][0],a[i][2]);
                }
            }
        }
            return 0;
        }*/
        
   /*int N=0;

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
*/
/*
    int a = 0;
    int b = 0;
    scanf("%d",&b);
    while(b>0){
        a = b%10+a*10;
        b = b/10;
    }
    printf("%d",a);
    return 0;
}*//*
int n = 0;
scanf("%d",&n);
for(int i = 2;i*i<=n;i=i+2){
    printf("%d\n",i*i);
}
return 0;
}*//*
int n = 0;
int a = 0;
printf("Enter number of days in month:");
scanf("%d",&n);
printf("Enter starting day of the week (1=Sun, 7=Sat):");
scanf("%d",&a);
printf("\n");
int i = 0;
for(;i<a-1;i++){printf("\t");}
for(i=0;i<n;i++){
    printf("%d\t",i+1);
    if((i+1)%7==(7-a+1)){
        printf("\n");
    }
}
return 0;
}*//*
int n = 0;
double x = 1;
double y = 1.0;
scanf("%d",&n);
for(int i = 1;i<=n;i++){
    for(int j = 1;j<=i;j++){
        x = x*j;
        
    }
    printf("%d\n",x);
    y = y + (1/x);
    x = 1;
}
printf("%lf",y);
return 0;
}*//*
int x = 0;
int y = 0;
int a[10];
printf("Enter a number:");
scanf("%d",&x);
while(x > 0){
for(int i = 0;x > 0;i++){
    a[i] = x%10;
    x = x/10;
}
printf("Repeated digit(s):");
for(int i = 0;i<10;i++){
    for(int j = i+1;j<10;j++){
        if(a[i]==a[j]){
            printf("%d ",a[i]);
        }
    }
}
printf("\n");
printf("Enter a number:");
scanf("%d",&x);
}
return 0;
}*//*
char a[10][10];
int i = 0;
int j = 0;
for(i=0;i<10;i++){
    for(j=0;j<10;j++){
        a[i][j]='.';
    }
}for(i=0;i<10;i++){
    for(j=0;j<10;j++){
        printf("%c",a[i][j]);
        
    }
    printf("\n");
}

return 0;

}*/
/* Sorts an array of integers using Quicksort algorithm 
#include <stdio.h> 

#define N 10 

void quicksort(int a[], int low, int high); 

int split(int a[], int low, int high); 

int main(void) 
{ 
 int a[N], i; 

 printf("Enter %d numbers to be sorted: ", N); 

 for (i = 0; i < N; i++) 

 scanf("%d", &a[i]); 

 quicksort(a, 0, N - 1); 

 printf("In sorted order: "); 

 for (i = 0; i < N; i++) 

 printf("%d ", a[i]); 

 printf("\n"); 

 return 0; 

} 
void quicksort(int a[], int low, int high) 
{ 
 int middle; 

 if (low >= high) return; 

 middle = split(a, low, high); 

 quicksort(a, low, middle - 1); 

 quicksort(a, middle + 1, high);
}


int split(int a[], int low, int high)
{ 
 int part_element = a[low]; 

 for (;;) { 

 while (low < high && part_element <= a[high]) 

 high--; 

 if (low >= high) break; 

 a[low++] = a[high]; 

 while (low < high && a[low] <= part_element) 

 low++; 

 if (low >= high) break; 

 a[high--] = a[low]; 

 } 

 a[high] = part_element; 

 return high; 
}*/
/*#include <stdio.h>
int check(int x,int y,int n);
int main(void)
{
    int x,y,n;
    scanf("%d %d %d",&x,&y,&n);
   printf("%d",check(x,y,n));
   return 0;
}
int check(int x,int y,int n)
{
    if(x>=0&&x<=(n-1)&&y>=0&&y<=(n-1))
    return 1;
    else return 0;
}*/
/*两个数的最大公倍数
#include<stdio.h>
int gcd(int x,int y);
int main(void)
{
    int x,y;
   printf("%d", gcd(x,y));
    return 0;
}
int gcd (int x,int y)
{
    scanf("%d %d",&x,&y);
    int t = 0;
    if(x<y){
        t=x;
        x=y;
        y=t;
    }
    int u = 1;
    for(;y>0;){
        u=x;
        x=y;
        y=u%y;
    }
    return x;
}*/
/*
#include<stdio.h>
double inner_product(double a[], double b[], int n);//函数声明

int main(void){
    double s;
    int n = 0;
    double a[n],b[n];
    printf("Numbers:");
    scanf("%d",&n);
    printf("Enter A:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter B:");
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    s = inner_product(a,b,n);//函数调用
    printf("%d",s);
    return 0;
}
//函数定义
double inner_product(double a[], double b[],int n){
    
    double s = 0;
    for(int i = 0;i<n;i++){
        s = s + a[i]*b[i];
    }
    return s;
}*/
/*
#include<stdio.h>
int main(void)
{
    int cm=0,foot,inch;
    double m;
    scanf("%d",&cm);
    m = (double)cm/100;
    foot = m/0.3048;
    inch = (m/0.3048-foot)*12;
    printf("%d %d",foot,inch);
    return 0;
}*//*
#include<stdio.h>
int main(void){
    int x;
    scanf("%d",&x);
    int i=0,y=x;
    for(i=0;y>0;i++){
        y=y/16;
    }
    int n=i;
    int a[n];
    for(i=0;i<n;i++){
        a[i]=x%16;
        x=x/16;
    }
    for(i=n-1;i>=0;i--){
        printf("%d",a[i]);
    }
    return 0;
}*/
