/*输入一个三位数，并翻转输出。*/
#include<stdio.h>
int main()
{
int a,b,c,x;
printf("输入三位整数");
scanf("%d",&x);
a=x%10;
b=(x/10)%10;
c=(x/10)/10;
printf("%d%d%d",a,b,c);
return 0;
}
