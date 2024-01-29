/*#include<stdio.h>
int main(){
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
#include<stdio.h>
double inner_product(double a[], double b[], int n);//函数声明

int main(void){
    double s;
    int n = 0;
    double a[n];
    double b[n];
    printf("Numbers:");
    scanf("%d",&n);
    printf("Enter A:");
    for(int i=0;i<n;i++){
        scanf("%lf",&a[i]);
    }
    printf("Enter B:");
    for(int i=0;i<n;i++){
        scanf("%lf",&b[i]);
    }
    s = inner_product(a,b,n);//函数调用
    printf("%lf",s);
    return 0;
}
//函数定义
double inner_product(double a[], double b[],int n){
    
    double s = 0;
    for(int i = 0;i<n;i++){
        s += a[i] * b[i];
    }
    return s;
}*/

/*#include<stdio.h>

double inner_product(double a[], double b[], int n) {  
    double result = 0;  
    for (int i = 0; i < n; i++) {  
        result += a[i] * b[i];  
    }  
    return result;  
}

int main(void) {  
    int n = 0;
    double a[n];  
    double b[n];  
    printf("Enter the number of elements in a and b: ");  
    scanf("%d", &n);

    printf("Enter the elements of a: ");  
    for (int i = 0; i < n; i++) {  
        scanf("%lf", &a[i]);  
    }

    printf("Enter the elements of b: ");  
    for (int i = 0; i < n; i++) {  
        scanf("%lf", &b[i]);  
    }

    double result = inner_product(a, b, n);  
    printf("The inner product is: %lf\n", result);  
    return 0;  
}*//*
#include <stdio.h>

void selection_sort(int arr[], int n) {
    // 基本情况：如果数组只有一个或零个元素，则已经排好序
    if (n <= 1) {
        return;
    }
    for(int i=0;i<n-1;i++){
        if(arr[n-1]<arr[i]){
            int p =arr[n-1];
            arr[n-1]=arr[i];
            arr[i]=p;
        }
    }

    // 在数组中找到最大元素的下标
   /*int max_index = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[max_index]) {
            max_index = i;
        }
    }

    // 将最大元素移到数组的最后
    int temp = arr[max_index];
    arr[max_index] = arr[n - 1];
    arr[n - 1] = temp;*/

    // 递归地对前 n-1 个元素进行排序
   /*selection_sort(arr, n - 1);
}

int main() {
    int n;
    printf("请输入整数的数量：");
    scanf("%d", &n);

    int arr[n];
    printf("请输入整数：");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    selection_sort(arr, n);

    printf("排序后的整数：");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}*//*
倒序输出
#include<stdio.h>
#define N 10 
int main(void)
{
int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
int *p = &a[0], *q = &a[N-1], temp; 
while (p < q) { 
temp = *p; 
 *p++ = *q; 
 *q-- = temp; 
}
for(int i = 0;i<N;i++){
    printf("%d ",a[i]);
}
return 0;
}*/
/* Prints a one-month reminder list 
#include <stdio.h> 

#include <string.h> 

#define MAX_REMIND 50 /* maximum number of reminders 

#define MSG_LEN 60 /* max length of reminder message 

int read_line(char str[], int n); 

int main(void) 
{ 
 char reminders[MAX_REMIND][MSG_LEN+3]; 

 char day_str[3], msg_str[MSG_LEN+1]; 

 int day, i, j, num_remind = 0; 

 for (;;) { 
 if (num_remind == MAX_REMIND) { 

 printf("-- No space left --\n"); 

 break; 
 } 

 printf("Enter day and reminder: "); 

 scanf("%2d", &day); 

 if (day == 0) 
 break; 

 sprintf(day_str, "%2d", day); 

 read_line(msg_str, MSG_LEN); 

 for (i = 0; i < num_remind; i++) 

 if (strcmp(day_str, reminders[i]) < 0) 

 break; 
 for (j = num_remind; j > i; j--) 

 strcpy(reminders[j], reminders[j-1]); 

 strcpy(reminders[i], day_str); 

 strcat(reminders[i], msg_str); 

 num_remind++; 
 } 
 printf("\nDay Reminder\n"); 

 for (i = 0; i < num_remind; i++) 

 printf(" %s\n", reminders[i]); 

 return 0; 
} 
//读入函数的定义
int read_line(char str[], int n) 
{ 
 int ch, i = 0; 
 while ((ch = getchar()) != '\n') 
 if (i < n) 
 str[i++] = ch; 
 str[i] = '\0'; 
 return i; 
}*/
#include<stdio.h>
#include<string.h>
int main (void)
{
   char *str;
    strcpy(str, "tire-bouchon");
strcpy(&str[4], "d-or-wi");
strcat(str, "red?");
printf("%s\n",str);
puts(str);//会自动换行
   printf("%s\n",str);

   
    

     char s[] = "Hsjodi", *p; 
 for (p = s; *p; p++) 
 --*p; 
 puts(s);
 return 0;
}