//常变量
#define ROW 9//真实行
#define COL 9

#define ROWS ROW + 2//为方便写程序和提高程序运行效率：行列+2
#define COLS COL + 2

#define NUM 80  //埋雷的数量

//系统头文件
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//声明
void InitBoard(char board[ROWS][COLS] ,int rows , int cols, char set);
void DisplayBoard(char board[ROWS][COLS] ,int row , int col);
void SetMine(char board[ROWS][COLS] ,int row , int col);
void FineMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row , int col);