#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*
小老鼠走迷宫（不考虑最优路径）
递归算法,系统随机设置障碍点
*/
#define X 10
#define Y 20
void outPut();//声明
bool findWay(int i, int j);//C语言布尔关键字：bool

int i = 0, j = 0;//全局变量
char map[X][Y] = {' '};

void main()
{
	srand((unsigned int)time(NULL));//时间戳
	for(i = 0; i < X; i++)//设‘！’为障碍
	{
		map[i][0] = '!';		//围墙左
		map[i][Y-1] = '!';		//围墙右
	}
	for(j = 0; j < Y; j++)
	{
		map[0][j] = '!';		//围墙上
		map[X-1][j] = '!';		//围墙下
	}
	
	//中间设置障碍点//
	for(i = 0; i < 10; i++)
	{
		map[rand()%(X-2)+1][rand()%(Y-2)+1] = '!';//使随机值位于在地图围墙内
	}
	puts("=====原本地图情况=====\n");
	outPut();

	//递归（关键）//
	findWay(1,1);		//（1，1）为初始坐标
	puts("=====走过后的地图情况=====\n");
	outPut();

}
/**
*作用：找路径
*找到返回true，反之...
*x,y表坐标，即走到了哪个位置
*现用递归找路，需要先规定map数组里各个含义的值
*    ￥‘\o’：可以走，'!'：障碍物，'*'：表示走过可以走通，'#'：走过但走不通
* 通关条件：map[X-2][Y-2]  == ‘*’
*定义一个找路顺序：下》右》上》左 
*/
bool findWay(int i, int j)//i,j表当前移动到的坐标
{
	if(map[X-2][Y-2]  == '*')
		return true;
	else{
		if(map[i][j] == '\0'){//本题关键
			map[i][j] = '*';
			if(findWay(i+1,j))		//向下走
				return true;
			else if(findWay(i,j+1))	//右
				return true;
			else if(findWay(i-1,j))	//上
				return true;
			else if(findWay(i,j-1))	//左
				return true;

		}else				//即map[i][j]!='\0'
			return false;
	}
}
//************函数（打印二维数组）************//
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