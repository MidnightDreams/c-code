#include "judges.h"

int JudgeNumber()
{
	char ch = 0;
	fflush(stdin);
	puts("agins?(Y/N)");
     label:
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
		goto label;
	}	
}

int JudgeCharater()
{
	char ch = 0;
	fflush(stdin);
	puts("agins?(1(Yes)/0(No))");
     label:
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
		goto label;
	}	
}