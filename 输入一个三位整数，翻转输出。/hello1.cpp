/*����һ����λ��������ת�����*/
#include<stdio.h>
int main()
{
int a,b,c,x;
printf("������λ����");
scanf("%d",&x);
a=x%10;
b=(x/10)%10;
c=(x/10)/10;
printf("%d%d%d",a,b,c);
return 0;
}
