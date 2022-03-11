#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#include<string.h>
#include<stdlib.h>
#include<time.h>
void main()
{
	int i=0,a=0,b=0,max=0,change=0;//i用于控制循环
	int idex = 1;
	int	random[10]={0},save[10]={0};
	srand((unsigned int)time(NULL));//时间戳（防止产生的随机数过于接近）
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
		b = a;//使b始终为大的那个，方便之后随机数的产生rand()%(b-a)+a
		a = change;
	 }
	for(i = 0; i<10 ; i++)
	{
		random[i] = rand()%(b-a)+a;//随机产生a,b区间的数
		printf("%d ",random[i]);
		save[i] = random[i];//保留randon数组数据，便于之后输出下标
	}
	putchar('\n');

	/*for(i = 0;i < 9; i++)//冒泡排序(错误试探，原因：没必要)
	{
		for(j = 0;j<9-i;j++)
		{
			if(random[j]<random[j+1])//大->小
			{
				change = random[j];
				random[j] = random[j+1];
				random[j+1]= change;
			}
		}
	}*/

	//找出max
	max = random[0];
	for(i = 0;i < 9; i++)
	{
		if(max<random[i+1]){
			max=random[i+1];
		}
	}

	//多个最大值全部输出，并输出其下标idex
	for(i = 0;i < 10; i++)
	{
		if(max==save[i])
		{
			printf("%d idex:%d\n",max,i+1);//要下标从1/0开始，改这里。。。。。。
		}
	}
}