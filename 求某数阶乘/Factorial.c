/*
��ĳ���Ľ׳�
*/

#include"judges.h"

int factorial(int num)	//�ݹ�
{
	if(num == 1)
		return 1;
	else
		return factorial(num - 1) * num;
}

void main()
{
	int num = 0;
	int i = 1;
	while(JudgeNumber(i++))		//ѭ����
	{	
		puts("Enter a positive whole number what you want to take it's factorial:");
		while(1)	
		{
			fflush(stdin);		//������뻺����
			scanf("%d",&num);
			if(num > 0)
			{
				printf("result:%d\n\n",factorial(num));
				break;
			}
			else				//��������
				puts("Error,what you input was wrong.Please enter a positive whole number.");	
		}
		
	}
	
}