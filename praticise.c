/*
��Ŀ����һ���������ֽ������������磺����120,��ӡ��120=2*2*2*3*5��
*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void main()
{
	unsigned int num = 0,temp = 0;//�м����temp
	unsigned int i = 0;			  //ѭ������
	short flag = 0;				  
	puts("������һ����������");
	scanf("%d",&num);
	temp = num;
	for(i = 2; i <= num; i++)
	{
		while(temp%i == 0 && num != i)//���ж��ܷ����������Ƿ�Ϊ���һλ��
		{
			if(flag == 0){			  //��һ�����������ִ��һ��
				printf("%d=",num);
				printf("%d",i);
			}else				      //�������
				printf("*%d",i);
			temp /= i;				  //�ؼ�
			flag = 1;				  //flag��1�����ߺ������������������������
		}
		if(num == i && flag == 0)
			puts("����������������������");
	}
	putchar('\n');
}

