#include<stdio.h>
int count = 0;
 /**
 * 汉诺塔a=>b（每次只能移动一个盘子，并且在移动过程中三根杆上都始终
 *    保持大盘在下，小盘在上，操作过程中盘子可以置于A、B、C任一杆上。）
 * num:要移动的盘子的数量，a,b,c：柱子
 */
void move(int num, char a, char b, char c)//参数顺序表a移到b，中间借助c（下方要注意分析顺序）
{
	if(num == 1)			//一个盘
		printf("%c => %c\n",a,c);
	else					//多个盘
	{
		//看成两个盘，最下面一个及上方全部盘
        //（1）先移动上面所有盘到b（借助c）
        move(num - 1, a, c, b);
        //（2）最下面的盘移到c
        printf("%c => %c\n",a,c);
        //（3）b所有盘移到c，借助a
        move(num - 1, b, a, c);
	}
	count++;
}

void main()
{
	puts("相关步骤为：");
	move(5,'A','B','C');
	printf("移动次数为：%d\n",count);
}