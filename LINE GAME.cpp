#include"GAME.h"

void game()
{
	//雷的信息存储
	//1.布置好的雷的信息
	char mine[ROWS][COLS] = {0};//11*11
	//2.排查出的雷的信息
	char show[ROWS][COLS] = {0};
	//初始化
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show,ROWS,COLS,'\v');
	//打印棋盘
	//DisplayBoard(mine,ROW,COL);
	DisplayBoard(show,ROW,COL);
	//布置雷
	SetMine(mine,ROW,COL);
	DisplayBoard(mine,ROW,COL);
	//扫雷
	FineMine(mine,show,ROW,COL);
	//puts("Mine Clearance\n");
}
void menu()
{
	printf("##########################\n");
	printf("#######   1.Play   #######\n");
    printf("#######   0.Exit   #######\n");
    printf("##########################\n");
}
void test()
{
	srand((unsigned int) time (NULL));//时间戳不能频繁调用，一般一次即可
	menu();
	int input = 0;
	do
	{
		printf("Please enter->: ");
		scanf_s("%d",&input);
		switch(input)
		{
		case 1:
			game();
			menu();
			break;
		case 0:
			printf("End of the game.\n");
			break;
		default:
			printf("Error!Please re-enter.\n");
			break;
		}
	}while(input);
}
int main()
{
	test();
	return 0;
}