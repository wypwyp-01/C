/*switch���֧ѡ�����*/
/*��������ĳɼ�����ȼ���90�ּ�����Ϊ�ȼ�A��60������Ϊ�ȼ�E������ÿʮ��һ���ȼ�*/
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
{case 10:printf("�ȼ�A");break;
case 9:printf("�ȼ�A");break;
case 8:printf("�ȼ�B");break;
case 7:printf("�ȼ�C");break;
case 6:printf("�ȼ�D");break;
default:printf("�ȼ�E");
}
return 0;
}








