#include "judges.h"

int JudgeNumber(int flag)
{
	char ch = 0;
	fflush(stdin);
	if(flag == 1)
		puts("Strat?(Y/N)");
	else 
		puts("Again?(Y/N)");
	while(1)
	{
		ch = getchar();
		fflush(stdin);	//清空输入缓存区
		if(ch == 'Y' || ch == 'y'){
			system("cls");		//<stdlib.h>或者<windows.h>
			return 1;
		}else if(ch == 'N' || ch == 'n'){
			puts("End Successful!");
			return 0;
		}else{
			puts("Error,what you input was wrong.Please re-enter.");
		}	
	}
	
}

int JudgeCharater(int flag)
{
	char ch = 0;
	fflush(stdin);
	if(flag == 1)
		puts("Strat?(1(Yes)/0(No))");
	else 
		puts("Again?(1(Yes)/0(No))");
	while(1)
	{
		ch = getchar();
		fflush(stdin);	//清空输入缓存区
		if(ch == '1'){
			system("cls");		//<stdlib.h>或者<windows.h>
			return 1;
		}else if(ch == '0'){
			puts("End Successful!");
			return 0;
		}else{
			puts("Error,what you input was wrong.Please re-enter.");
		}	
	}
		
}