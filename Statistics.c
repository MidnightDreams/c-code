/*
题目：输入一行字符，分别统计出其空格、英文字母、数字和其它字符的个数。
*/
#include<stdio.h>

void main()
{
	int i = 0;
	int num[4] = {0};			//默认0
	char str[100] = {0};				//默认‘\0’
	puts("请输入一行字符：");
	scanf("%[^\n]",str);	//运用正则表达式来使不会让空格成为终止符号
	while(str[i] != '\0')	//读到字符数组末尾
	{
		if((str[i] >= 'a'&& str[i] <= 'z') || (str[i] >= 'A'&& str[i] <= 'Z') )//英文字母
			num[0]++;
		else if(str[i] >= '0' && str[i] <= '9')	//数字
			num[1]++;
		else if(str[i] == ' ')					//空格
			num[2]++;
		else
			num[3]++;							//其他
		i++;
	}
	printf("英文字母个数:%d个\n数字个数:%d个\n空格:%d个\n其它字符个数:%d个\n",num[0],num[1],num[2],num[3]);
}