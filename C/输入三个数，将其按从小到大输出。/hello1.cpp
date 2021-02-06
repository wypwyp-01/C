/*Enter three numbers and print them from smallest to largest.*/
#include<stdio.h>
int main()
{int a,b,c,min;
printf("Please input a,b and c");/*提示输入a，b，和c。*/
scanf("%d%d%d",&a,&b,&c);
if(a>b)
	{min=b;
     b=a;
     a=min;}/*将a和b作比较，并将较小的值赋给a*/
if(c>=b)
	printf("%d %d %d",a,b,c);/*将c和b作比较，如果c大于等于b，则按照a，b，c的顺序输出*/
else if(c<=a)
	printf("%d %d %d",c,a,b);/*将c和a作比较，如果c小于等于a，则按照c，a，b的顺序输出*/
else
	printf("%d %d %d",a,c,b);/*最后一种情况，即c的值介于两者之间，则按照a，c，b的顺序输出*/
return 0;
}