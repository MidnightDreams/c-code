/*
题目：求s=a+aa+aaa+aaaa+aa…a的值，其中a是一个数字。例如2+22+222+2222+22222
(此时共有5个数相加)，几个数相加有键盘控制。输出结果的形式如：2+22+222=246；
*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"judges.h"

void Step();
void main()
{
	Step();
	while(JudgeCharater())
	{
		Step();
		Sleep(1000);//<windows.h>
	}
		
}
void Step()
{
	int time,num,num1,sum = 0;	//sum初始化为0
	int i,j;
	puts("请输入一个小于十的正整数：");
	scanf("%d",&num);
	puts("要重复几次？");
	scanf("%d",&time);
	if(time == 1)
	{
		printf("%d",num);
		printf("\n总和为:%d\n",num);
	}
	else
		for(i = 0; i < time; i++)//输出
		{
			num1 = num;
			for(j = 0; j <= i; j++)
			{
				printf("%d",num);
				sum += num1;
				num1 *= 10;
			}
			if(i < time - 1)	//最后一次不输出
				putchar('+');
			else
				printf("=%d\n",sum);
		}
}

