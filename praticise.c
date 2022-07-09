/*
题目：将一个正整数分解质因数。例如：输入120,打印出120=2*2*2*3*5。
*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void main()
{
	unsigned int num = 0,temp = 0;//中间变量temp
	unsigned int i = 0;			  //循环控制
	short flag = 0;				  
	puts("请输入一个正整数：");
	scanf("%d",&num);
	temp = num;
	for(i = 2; i <= num; i++)
	{
		while(temp%i == 0 && num != i)//先判断能否被整除，及是否为最后一位数
		{
			if(flag == 0){			  //第一次输出，仅需执行一次
				printf("%d=",num);
				printf("%d",i);
			}else				      //后续输出
				printf("*%d",i);
			temp /= i;				  //关键
			flag = 1;				  //flag置1，告诉后面该数不会是素数（质数）
		}
		if(num == i && flag == 0)
			puts("该数是质数，无质因数。");
	}
	putchar('\n');
}

