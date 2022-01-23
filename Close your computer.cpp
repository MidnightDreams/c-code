#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<Windows.h>
int main()
{
	int i = 0;
	int a = 0;
	char str[20] = {0};
	system("shutdown -s -t 300");
	puts("Do you kown how to end of the \"EOF\"?\nDo it or you computer will close soon. ");
	Sleep(1000);
	puts("Oh,you only have five chances by the by.\n");
	while( (a = getchar()) != EOF)
	{
		i++;
		printf("Error!%d opportunities left.",i);
		if(5 == i)goto end;
	}
	system("shutdown -a");
	puts("Congratulation! You did it.");
end:
	puts("Unfortunately,There is no chance you have.\nYou computer will be shutdown.");

}