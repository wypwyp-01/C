/*switch多分支选择语句*/
/*根据输入的成绩输出等级，90分及以上为等级A，60分以下为等级E，其余每十分一个等级*/
#include<stdio.h>
int main()
{/*double grade;
int a;
printf("input the grade:\n");
scanf("%lf",&grade);
a=(int)(grade/10);
switch(a)*/
int grade;
printf("input the grade:\n");
scanf("%d",&grade);
switch(grade/10)
{case 10:printf("等级A");break;
case 9:printf("等级A");break;
case 8:printf("等级B");break;
case 7:printf("等级C");break;
case 6:printf("等级D");break;
default:printf("等级E");
}
return 0;
}








