#include"GAME.h"

void InitBoard(char board[ROWS][COLS] ,int rows , int cols, char set)
{
	int i = 0;
	int j = 0;
	for(i = 0; i < rows; i++)
	{  
		for(j = 0; j < cols; j++)
	   {
		   board[i][j] = set;
	   }
	}
}

void DisplayBoard(char board[ROWS][COLS] ,int row , int col)
{
    int i = 0;
	int j = 0;
	//打印列号
    for(i = 0; i <= row; i++)
	 {
		printf("%d ",i);
	 }
        putchar('\n');
	for(i = 1; i <= row; i++)
	{
		printf("%d ",i);
		for(j = 1; j <= col; j++)
		{
			printf("%c ",board[i][j]);
		}
		putchar('\n');
	}
}

void SetMine(char board[ROWS][COLS] ,int row , int col)
{
	int count = NUM;
	while(count)
	{
		int x = rand()%row + 1;
		int y = rand()%col + 1;
		if(board[x][y] != '1')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

//'3' - '0' = 3
//'15'- '0' = 15
//'0' - '0' = 0
int get_mine_count(char mine[ROWS][COLS],int x,int y)
{
	return
	mine[x-1][y]  +
	mine[x-1][y-1]+
	mine[x]  [y-1]+                          
	mine[x+1][y-1]+
	mine[x+1][y]  +
	mine[x+1][y+1]+
	mine[x]  [y+1]+
	mine[x-1][y+1] - 8 * '0';
}

void FineMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row , int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
   while(win < row*col - NUM)//9 * 9 - 10 = 71
   {
	printf("Please enter a seat(Like：\"x.y\")->: ");
	scanf_s("%d.%d",&x,&y);//控制坐标输入方法
	system("cls");
	if(x >=1 && x < row && y >= 1 && y < col)
	{
		//坐标合法
		if(mine[x][y]=='1')//踩雷了
		{
			printf("Boom!Unfortunately,you were died.\n");
			DisplayBoard(mine,row,col);
			break;
		}
		else //未踩雷
		{
			//计算x,y坐标周围有几个雷
			int count = get_mine_count(mine,x,y);//为防止一个地方(这里指void FindMine这个函数里)的代码数过多造成混乱，再写一个函数
			show[x][y] = count + '0';//'0'+ 25 =‘25’
			DisplayBoard(show,row,col);
			win++ ;
		}
	}
	//坐标不合法
	else printf("Error,illegal enter!Please re-enter\n");
   }
   if(win == row*col - NUM)
   {
	   printf("Congratulation!You alive\n");
	   DisplayBoard(mine,row,col);
   }
}