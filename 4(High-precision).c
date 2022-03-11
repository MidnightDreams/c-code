
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define N  100
int main()
{  /*Mind:用字符实现数的高精度运算
              arr 0123
          1234  ->4321
		+   24    42
		  1258    8521          */
	char a[N]={0},b[N]={0};//存数字字符
	int i,max_legth,a_legth,b_legth,num,mid;
	short a1[N]={0},b1[N]={0},c1[N]={0};//用short节省空间浪费
	int flag = 0;//用于记录满十否
	scanf("%s%s",&a,&b);
	a_legth = strlen(a);
	b_legth = strlen(b);
	//字符转数字
	max_legth =a_legth > b_legth ? a_legth : b_legth;
	for(i=0;i < max_legth; i++)//或者搞两个for
	{
		if(a[i] != '\0')
		{
			a1[i] = a[i] - '0';//eg.‘5’-‘0’=5
		}
		if(b[i]  != '\0')
		{
			b1[i] = b[i] - '0';
		}
	}
	//数字在数组中的位置倒过来，如最高位在a1[0]
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
	
	//￥实现两数加减（由题，暂时只考虑相加情况）Remark:若要考虑两数相差过大的情况，该段代码需优化
	for(i = 0; i <= max_legth; i++)//最后的一个相加数可能大于十,so,use" <= "
	{
		if(0 == flag)
		{
			num = a1[i] + b1[i];
		}
		else
		{
			num = a1[i] + b1[i] + 1;
		}
		if(num >= 10)//full 10 进 1
		{
			c1[i] = num % 10;
			flag  = 1;
		}
		else 
		{
			c1[i] = num;
			flag  = 0;
		}
	}   //￥
	//倒序输出数组c1
	max_legth=(0==c1[max_legth] ? max_legth-1 : max_legth);//防止输出无意义的0
	for(i= max_legth; i >= 0; i--)
	{
		printf("%d",c1[i]);
	}
	putchar('\n');
  return 0;
}