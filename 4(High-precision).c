
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define N  100
int main()
{  /*Mind:���ַ�ʵ�����ĸ߾�������
              arr 0123
          1234  ->4321
		+   24    42
		  1258    8521          */
	char a[N]={0},b[N]={0};//�������ַ�
	int i,max_legth,a_legth,b_legth,num,mid;
	short a1[N]={0},b1[N]={0},c1[N]={0};//��short��ʡ�ռ��˷�
	int flag = 0;//���ڼ�¼��ʮ��
	scanf("%s%s",&a,&b);
	a_legth = strlen(a);
	b_legth = strlen(b);
	//�ַ�ת����
	max_legth =a_legth > b_legth ? a_legth : b_legth;
	for(i=0;i < max_legth; i++)//���߸�����for
	{
		if(a[i] != '\0')
		{
			a1[i] = a[i] - '0';//eg.��5��-��0��=5
		}
		if(b[i]  != '\0')
		{
			b1[i] = b[i] - '0';
		}
	}
	//�����������е�λ�õ������������λ��a1[0]
	mid = a_legth/2;
	for(i = 0;i < mid;i++,a_legth--)
	{
		int t=a1[i];
		a1[i]=a1[a_legth-1];
		a1[a_legth-1]=t;
	}
	mid = b_legth/2;
	for(i = 0;i < mid;i++, b_legth --)
	{
		int t=b1[i];
		b1[i]=b1[b_legth - 1];
		b1[b_legth - 1]=t;
	}
	
	//��ʵ�������Ӽ������⣬��ʱֻ������������Remark:��Ҫ���������������������öδ������Ż�
	for(i = 0; i <= max_legth; i++)//����һ����������ܴ���ʮ,so,use" <= "
	{
		if(0 == flag)
		{
			num = a1[i] + b1[i];
		}
		else
		{
			num = a1[i] + b1[i] + 1;
		}
		if(num >= 10)//full 10 �� 1
		{
			c1[i] = num % 10;
			flag  = 1;
		}
		else 
		{
			c1[i] = num;
			flag  = 0;
		}
	}   //��
	//�����������c1
	max_legth=(0==c1[max_legth] ? max_legth-1 : max_legth);//��ֹ����������0
	for(i= max_legth; i >= 0; i--)
	{
		printf("%d",c1[i]);
	}
	putchar('\n');
  return 0;
}