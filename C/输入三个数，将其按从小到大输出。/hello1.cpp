/*Enter three numbers and print them from smallest to largest.*/
#include<stdio.h>
int main()
{int a,b,c,min;
printf("Please input a,b and c");/*��ʾ����a��b����c��*/
scanf("%d%d%d",&a,&b,&c);
if(a>b)
	{min=b;
     b=a;
     a=min;}/*��a��b���Ƚϣ�������С��ֵ����a*/
if(c>=b)
	printf("%d %d %d",a,b,c);/*��c��b���Ƚϣ����c���ڵ���b������a��b��c��˳�����*/
else if(c<=a)
	printf("%d %d %d",c,a,b);/*��c��a���Ƚϣ����cС�ڵ���a������c��a��b��˳�����*/
else
	printf("%d %d %d",a,c,b);/*���һ���������c��ֵ��������֮�䣬����a��c��b��˳�����*/
return 0;
}