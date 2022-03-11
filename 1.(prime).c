#include<stdio.h>
void main(void)
{
	int i,j,sum=2;
    for(i=3;i<100;i++){ //1与100不是素数，又已定义sum=2，故得此
	  for(j=2;j<i;j++){
			if(i%j==0)break;
			if(i==j+1)sum+=i;
		}
	}
	  printf("%d\n",sum);
}