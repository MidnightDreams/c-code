#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define N  100
int main(void)/*eg. Next to me is a handsome guy
					next to me is a beauty
					i will appreciate you if you could do me a favor
			  */	
{
	
	char b[N]={0};//һά�ַ��������ȫ������
	char str[N][N] ={'0'};//ʹÿ�д��һ������
	int i=0,num=1,max=0,second=0,j=0;
	int row = 0,line = 0;
	int arr1[N];//��a��ÿ�еĵ�����

	gets(b);//iuput words to computer

	//How many words?
	for(i = 0; i<N;i++)
	{
		if(' ' == b[i])num++;
		if('\0'== b[i])break;
	}

	//һά��������ת��λ����
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
		line = 0;//ʹ����һ��ʱ�����´�0λ��ʼ����
		if('\0'== b[j])break;
	}

	for(i = 0;i < num;i++)
	{
		arr1[i] = strlen(str[i]);//���ÿ�����ʵ���ĸ��
	}

	//�ҵ��ڶ����ĵ���
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

	 //���
	 for(i = 0;i < num;i++)
	 {
		 if(strlen(str[i]) == second)
		 {
			 puts(str[i]);
			 break;       //�������ȫ����ɾ������
		 }
	 }
	 return 0;
}