/*
��Ŀ����s=a+aa+aaa+aaaa+aa��a��ֵ������a��һ�����֡�����2+22+222+2222+22222
(��ʱ����5�������)������������м��̿��ơ�����������ʽ�磺2+22+222=246��
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
	int time,num,num1,sum = 0;	//sum��ʼ��Ϊ0
	int i,j;
	puts("������һ��С��ʮ����������");
	scanf("%d",&num);
	puts("Ҫ�ظ����Σ�");
	scanf("%d",&time);
	if(time == 1)
	{
		printf("%d",num);
		printf("\n�ܺ�Ϊ:%d\n",num);
	}
	else
		for(i = 0; i < time; i++)//���
		{
			num1 = num;
			for(j = 0; j <= i; j++)
			{
				printf("%d",num);
				sum += num1;
				num1 *= 10;
			}
			if(i < time - 1)	//���һ�β����
				putchar('+');
			else
				printf("=%d\n",sum);
		}
}

