/*if语句的嵌套*/
/*男性60岁退休，女性55岁退休，要求输入性别及年龄，输出这个人在职或者退休*/
#include<stdio.h>
int main()
{char gender;
int age;
printf("输入性别和年龄,用空格隔开，m表示男性，f表示女性");
scanf("%c %d",&gender,&age);
if(gender=='m')/*判断性别*/
{if(age>=60)/*判断年龄*/
    printf("退休");
else
	printf("在职");
}
else if(gender=='f')/*判断性别*/
{if(age>=55)/*判断年龄*/
    printf("退休");
else
	printf("在职");
}
else
	printf("性别输入错误");
return 0;
}
