#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define N  100
int main(void)/*eg. Next to me is a handsome guy
					next to me is a beauty
					i will appreciate you if you could do me a favor
			  */	
{
	
	char b[N]={0};//一维字符数组接收全部单词
	char str[N][N] ={'0'};//使每列存放一个单词
	int i=0,num=1,max=0,second=0,j=0;
	int row = 0,line = 0;
	int arr1[N];//存a中每行的单词数

	gets(b);//iuput words to computer

	//How many words?
	for(i = 0; i<N;i++)
	{
		if(' ' == b[i])num++;
		if('\0'== b[i])break;
	}

	//一维数组数据转二位数组
	for(row = 0;row < num;row++)
	{
		for(j;j < N;j++)
		{
			if(' '==b[j])
			{
				j++;
				break;
			}
			str[row][line]=b[j];
			line++;
		}
		line = 0;//使到下一行时，重新从0位开始输入
		if('\0'== b[j])break;
	}

	for(i = 0;i < num;i++)
	{
		arr1[i] = strlen(str[i]);//求出每个单词的字母数
	}

	//找到第二长的单词
	 for(i = 0;i < num;i++)
	 {
		if( arr1[i]>max )
		{
			max = arr1[i];
	    }
	 } 
	 for(i = 0;i < num;i++)
	 {
		 if( arr1[i]  == max )continue;
	  if( arr1[i]> second)
		 {
			second = arr1[i];
	     }
	 }

	 //输出
	 for(i = 0;i < num;i++)
	 {
		 if(strlen(str[i]) == second)
		 {
			 puts(str[i]);
			 break;       //若是输出全部，删掉即可
		 }
	 }
	 return 0;
}