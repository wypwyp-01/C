/*if����Ƕ��*/
/*����60�����ݣ�Ů��55�����ݣ�Ҫ�������Ա����䣬����������ְ��������*/
#include<stdio.h>
int main()
{char gender;
int age;
printf("�����Ա������,�ÿո������m��ʾ���ԣ�f��ʾŮ��");
scanf("%c %d",&gender,&age);
if(gender=='m')/*�ж��Ա�*/
{if(age>=60)/*�ж�����*/
    printf("����");
else
	printf("��ְ");
}
else if(gender=='f')/*�ж��Ա�*/
{if(age>=55)/*�ж�����*/
    printf("����");
else
	printf("��ְ");
}
else
	printf("�Ա��������");
return 0;
}
