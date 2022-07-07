#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*
С�������Թ�������������·����
�ݹ��㷨,ϵͳ��������ϰ���
*/
#define X 10
#define Y 20
void outPut();//����
bool findWay(int i, int j);//C���Բ����ؼ��֣�bool

int i = 0, j = 0;//ȫ�ֱ���
char map[X][Y] = {' '};

void main()
{
	srand((unsigned int)time(NULL));//ʱ���
	for(i = 0; i < X; i++)//�衮����Ϊ�ϰ�
	{
		map[i][0] = '!';		//Χǽ��
		map[i][Y-1] = '!';		//Χǽ��
	}
	for(j = 0; j < Y; j++)
	{
		map[0][j] = '!';		//Χǽ��
		map[X-1][j] = '!';		//Χǽ��
	}
	
	//�м������ϰ���//
	for(i = 0; i < 10; i++)
	{
		map[rand()%(X-2)+1][rand()%(Y-2)+1] = '!';//ʹ���ֵλ���ڵ�ͼΧǽ��
	}
	puts("=====ԭ����ͼ���=====\n");
	outPut();

	//�ݹ飨�ؼ���//
	findWay(1,1);		//��1��1��Ϊ��ʼ����
	puts("=====�߹���ĵ�ͼ���=====\n");
	outPut();

}
/**
*���ã���·��
*�ҵ�����true����֮...
*x,y�����꣬���ߵ����ĸ�λ��
*���õݹ���·����Ҫ�ȹ涨map��������������ֵ
*    ����\o���������ߣ�'!'���ϰ��'*'����ʾ�߹�������ͨ��'#'���߹����߲�ͨ
* ͨ��������map[X-2][Y-2]  == ��*��
*����һ����·˳���¡��ҡ��ϡ��� 
*/
bool findWay(int i, int j)//i,j��ǰ�ƶ���������
{
	if(map[X-2][Y-2]  == '*')
		return true;
	else{
		if(map[i][j] == '\0'){//����ؼ�
			map[i][j] = '*';
			if(findWay(i+1,j))		//������
				return true;
			else if(findWay(i,j+1))	//��
				return true;
			else if(findWay(i-1,j))	//��
				return true;
			else if(findWay(i,j-1))	//��
				return true;

		}else				//��map[i][j]!='\0'
			return false;
	}
}
//************��������ӡ��ά���飩************//
void outPut()
{
	for(i = 0; i < X; i++)
	{
		for(j = 0; j < Y; j++)
		{
			printf("%c",map[i][j]);
		}
		putchar('\n');
	}
}