#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#include<string.h>
#include<stdlib.h>
#include<time.h>
void main()
{
	int i=0,a=0,b=0,max=0,change=0;//i���ڿ���ѭ��
	int idex = 1;
	int	random[10]={0},save[10]={0};
	srand((unsigned int)time(NULL));//ʱ�������ֹ��������������ڽӽ���
	while(1)
	{
	  scanf("%d%d",&a,&b);
	 if(a!=b)
		 {
			 break;
	     }
	 puts("Erro!Please re-enter.");
	}
	 if(a>b)
	 {
		change = b;
		b = a;//ʹbʼ��Ϊ����Ǹ�������֮��������Ĳ���rand()%(b-a)+a
		a = change;
	 }
	for(i = 0; i<10 ; i++)
	{
		random[i] = rand()%(b-a)+a;//�������a,b�������
		printf("%d ",random[i]);
		save[i] = random[i];//����randon�������ݣ�����֮������±�
	}
	putchar('\n');

	/*for(i = 0;i < 9; i++)//ð������(������̽��ԭ��û��Ҫ)
	{
		for(j = 0;j<9-i;j++)
		{
			if(random[j]<random[j+1])//��->С
			{
				change = random[j];
				random[j] = random[j+1];
				random[j+1]= change;
			}
		}
	}*/

	//�ҳ�max
	max = random[0];
	for(i = 0;i < 9; i++)
	{
		if(max<random[i+1]){
			max=random[i+1];
		}
	}

	//������ֵȫ���������������±�idex
	for(i = 0;i < 10; i++)
	{
		if(max==save[i])
		{
			printf("%d idex:%d\n",max,i+1);//Ҫ�±��1/0��ʼ�����������������
		}
	}
}